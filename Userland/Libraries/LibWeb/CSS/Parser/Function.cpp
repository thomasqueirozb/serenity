/*
 * Copyright (c) 2020-2021, the SerenityOS developers.
 * Copyright (c) 2021-2022, Sam Atkins <atkinssj@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/CSS/Parser/Function.h>
#include <LibWeb/CSS/Serialize.h>

namespace Web::CSS::Parser {

Function::Function(DeprecatedFlyString name, Vector<ComponentValue>&& values)
    : m_name(move(name))
    , m_values(move(values))
{
}

Function::~Function() = default;

DeprecatedString Function::to_deprecated_string() const
{
    StringBuilder builder;

    serialize_an_identifier(builder, m_name);
    builder.append('(');
    builder.join(' ', m_values);
    builder.append(')');

    return builder.to_deprecated_string();
}

}
