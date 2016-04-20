/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMTestModeChangeListener : NSObject {

	long long _desiredMode;
	long long _desiredDevice;
	/*^block*/id _handler;

}

@property (assign,nonatomic) long long desiredMode;                //@synthesize desiredMode=_desiredMode - In the implementation block
@property (assign,nonatomic) long long desiredDevice;              //@synthesize desiredDevice=_desiredDevice - In the implementation block
@property (nonatomic,copy) id handler;                             //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(long long)desiredMode;
-(void)setDesiredMode:(long long)arg1 ;
-(long long)desiredDevice;
-(void)setDesiredDevice:(long long)arg1 ;
@end

