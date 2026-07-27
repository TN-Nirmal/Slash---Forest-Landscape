#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if(GetWorld()) { DrawDebugSphere(GetWorld(), Location, 50.f, 12, FColor::Red, true, 5.f);}

#define DRAW_LINE(StartLocation, EndLocation) if(GetWorld()){\
    DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Yellow, true,, -1.f, 0, 0.2f);}

#define DRAW_POINT(Location) if(GetWorld()){\
    DrawDebugPoint(GetWorld(), Location, 10.f, FColor::Green, true, 0.2f);}

#define DRAW_VECTOR(StartLocation, EndLocation) \
if(GetWorld()) \
{ \
    DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Yellow, true, -1.f, 0, 0.2f); \
    DrawDebugPoint(GetWorld(), EndLocation, 10.f, FColor::Green, true, 0.2f); \
}

#define DRAW_CAPSULE(StartLocation, EndLocation, Radius, HalfHeight) \
if(GetWorld()) \
{ \
	DrawDebugCapsule(GetWorld(), StartLocation, HalfHeight, Radius, FQuat::Identity, FColor::Blue, true, -1.f, 0, 0.5f); \
	DrawDebugCapsule(GetWorld(), EndLocation, HalfHeight, Radius, FQuat::Identity, FColor::Blue, true, -1.f, 0, 0.5f); \
}