/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@interface AUExtensionInstanceProxy : NSObject {

	AUv3InstanceBase* _auInstance;

}

@property (assign,nonatomic) AUv3InstanceBase* auInstance;              //@synthesize auInstance=_auInstance - In the implementation block
-(AUv3InstanceBase*)auInstance;
-(void)setAuInstance:(AUv3InstanceBase*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

