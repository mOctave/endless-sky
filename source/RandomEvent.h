/* RandomEvent.h
Copyright (c) 2021 by Michael Zahniser

Endless Sky is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later version.

Endless Sky is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.
*/

#ifndef RANDOMEVENT_H_
#define RANDOMEVENT_H_

#include <string>



// A class representing an event that triggers randomly
// in a given internal, for example fleets or hazards.
template <typename T>
class RandomEvent {
public:
	constexpr RandomEvent(const T *event, int period) noexcept;

	const std::string &Name() const;
	constexpr const T *Get() const noexcept;
	constexpr int Period() const noexcept;

	friend constexpr bool operator==(const RandomEvent &lhs, const RandomEvent &rhs)
	{
		return lhs.event == rhs.event && lhs.period == rhs.period;
	}
	friend constexpr bool operator!=(const RandomEvent &lhs, const RandomEvent &rhs)
	{
		return !(lhs == rhs);
	}

private:
	const T *event;
	int period;

	friend class SystemEditor;
};



template <typename T>
constexpr RandomEvent<T>::RandomEvent(const T *event, int period) noexcept
	: event(event), period(period > 0 ? period : 200)
{
}

template <typename T>
const std::string &RandomEvent<T>::Name() const
{
	return event->Name();
}

template <typename T>
constexpr const T *RandomEvent<T>::Get() const noexcept
{
	return event;
}

template <typename T>
constexpr int RandomEvent<T>::Period() const noexcept
{
	return period;
}



#endif
