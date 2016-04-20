/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString, UIAttachmentBehavior;

@interface OKDynamicAttachment : NSObject <OKSettingsSupport> {

	UIOffset _localOffsetFromCenter;
	NSString* _remoteWidgetName;
	SCD_Union_OK12 _remote;
	double _length;
	double _damping;
	double _frequency;
	struct {
		unsigned needsUpdate : 1;
		unsigned hasLength : 1;
		unsigned hasDamping : 1;
		unsigned hasFrequency : 1;
	}  _flags;
	UIAttachmentBehavior* _behavior;

}

@property (readonly) UIAttachmentBehavior * behavior;               //@synthesize behavior=_behavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(UIAttachmentBehavior *)behavior;
-(id)initWithSettings:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)updateForOwningDynamicProxy:(id)arg1 ;
@end

