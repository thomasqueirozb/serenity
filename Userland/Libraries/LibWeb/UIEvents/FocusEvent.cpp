/*
 * Copyright (c) 2022, Andreas Kling <kling@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/Bindings/Intrinsics.h>
#include <LibWeb/UIEvents/FocusEvent.h>

namespace Web::UIEvents {

FocusEvent* FocusEvent::construct_impl(JS::Realm& realm, DeprecatedFlyString const& event_name, FocusEventInit const& event_init)
{
    return realm.heap().allocate<FocusEvent>(realm, realm, event_name, event_init);
}

FocusEvent::FocusEvent(JS::Realm& realm, DeprecatedFlyString const& event_name, FocusEventInit const& event_init)
    : UIEvent(realm, event_name)
{
    set_prototype(&Bindings::cached_web_prototype(realm, "FocusEvent"));
    set_related_target(const_cast<DOM::EventTarget*>(event_init.related_target.ptr()));
}

FocusEvent::~FocusEvent() = default;

}
