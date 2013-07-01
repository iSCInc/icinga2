/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012 Icinga Development Team (http://www.icinga.org/)        *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#ifndef FLAPPINGMESSAGE_H
#define FLAPPINGMESSAGE_H

#include "icinga/i2-icinga.h"
#include "icinga/service.h"
#include "remoting/messagepart.h"

namespace icinga
{

/**
 * A downtime message for a service.
 *
 * @ingroup icinga
 */
class I2_ICINGA_API FlappingMessage : public MessagePart
{
public:
	FlappingMessage(void) : MessagePart() { }
	explicit FlappingMessage(const MessagePart& message) : MessagePart(message) { }

	String GetService(void) const;
	void SetService(const String& service);

	FlappingState GetState(void) const;
	void SetState(FlappingState state);
};

}

#endif /* FLAPPINGMESSAGE_H */
