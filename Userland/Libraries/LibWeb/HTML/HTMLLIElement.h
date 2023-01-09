/*
 * Copyright (c) 2020, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/DOM/ARIARoleNames.h>
#include <LibWeb/HTML/HTMLElement.h>

namespace Web::HTML {

class HTMLLIElement final : public HTMLElement {
    WEB_PLATFORM_OBJECT(HTMLLIElement, HTMLElement);

public:
    virtual ~HTMLLIElement() override;

    // https://www.w3.org/TR/html-aria/#el-li
    virtual DeprecatedFlyString default_role() const override { return DOM::ARIARoleNames::listitem; };

private:
    HTMLLIElement(DOM::Document&, DOM::QualifiedName);
};

}
