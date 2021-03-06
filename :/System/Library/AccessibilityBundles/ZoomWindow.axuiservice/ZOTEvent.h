/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <ScreenReaderCore/SCRCGestureEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AXEventRepresentation;

@interface ZOTEvent : SCRCGestureEvent <NSCopying> {

	AXEventRepresentation* _record;
	BOOL _weCare;
	BOOL _chordChanged;
	BOOL _handTouched;

}

@property (nonatomic,retain) AXEventRepresentation * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) unsigned handEventType; 
+(id)createEventFromEventRepresentation:(id)arg1 ;
-(BOOL)handTouched;
-(void)_addFingerInformation;
-(BOOL)chordChanged;
-(unsigned)handEventType;
-(BOOL)isTouchEventWeCareAbout;
-(id)_initWithDeviceIdentifier:(unsigned long long)arg1 andEventRepresentation:(id)arg2 ;
-(AXEventRepresentation *)record;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRecord:(AXEventRepresentation *)arg1 ;
@end

