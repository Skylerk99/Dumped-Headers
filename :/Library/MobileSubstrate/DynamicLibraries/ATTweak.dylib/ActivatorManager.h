/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/ATTweak.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ActivatorManager : NSObject
+(id)getActivatorTriggerByEventName:(id)arg1 ;
+(void)inspectActivators;
+(id)getActivatorTriggersAll;
+(id)getActivatorTriggerForControlPanel;
+(id)getActivatorTriggerForStartStopPlaying;
+(id)compatibleModesOfEvent:(id)arg1 ;
+(void)assignActivatorTrigger:(id)arg1 forModes:(id)arg2 ;
+(void)keepConsistentAmongFilesAndActivatorAndDb;
+(void)makeSureControlActionsAreSet;
+(BOOL)isEventAssigned:(id)arg1 forWhat:(int)arg2 andFilePath:(id)arg3 ;
+(void)unassignActivatorTrigger:(id)arg1 forModes:(id)arg2 ;
+(id)getActivatorTriggerByFilePath:(id)arg1 ;
+(id)compatibleModesOfEventAssigned:(id)arg1 ;
+(BOOL)allowedToUnassignEvent:(id)arg1 fromListener:(id)arg2 ;
@end

