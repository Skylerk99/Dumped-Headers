/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMConflictingControlConfiguration : NSObject {

	long long _desiredFlashMode;
	long long _desiredHDRMode;
	long long _flashAndHDRConflictingControl;
	long long _desiredIrisMode;
	long long _desiredFilterType;
	long long _irisAndFilterConflictingControl;

}

@property (nonatomic,readonly) long long desiredFlashMode;                             //@synthesize desiredFlashMode=_desiredFlashMode - In the implementation block
@property (nonatomic,readonly) long long desiredHDRMode;                               //@synthesize desiredHDRMode=_desiredHDRMode - In the implementation block
@property (nonatomic,readonly) long long flashAndHDRConflictingControl;                //@synthesize flashAndHDRConflictingControl=_flashAndHDRConflictingControl - In the implementation block
@property (nonatomic,readonly) long long desiredIrisMode;                              //@synthesize desiredIrisMode=_desiredIrisMode - In the implementation block
@property (nonatomic,readonly) long long desiredFilterType;                            //@synthesize desiredFilterType=_desiredFilterType - In the implementation block
@property (nonatomic,readonly) long long irisAndFilterConflictingControl;              //@synthesize irisAndFilterConflictingControl=_irisAndFilterConflictingControl - In the implementation block
+(void)resolveDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 primaryConflictingControl:(long long)arg3 device:(long long)arg4 toFlashMode:(long long*)arg5 HDRMode:(long long*)arg6 ;
+(void)resolveDesiredIrisMode:(long long)arg1 desiredFilterType:(long long)arg2 primaryConflictingControl:(long long)arg3 device:(long long)arg4 toIrisMode:(long long*)arg5 filterType:(long long*)arg6 ;
-(id)init;
-(id)initWithDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 flashAndHDRConflictingControl:(long long)arg3 desiredIrisMode:(long long)arg4 desiredFilterType:(long long)arg5 irisAndFilterConflictingControl:(long long)arg6 ;
-(long long)desiredFlashMode;
-(long long)desiredHDRMode;
-(long long)flashAndHDRConflictingControl;
-(long long)desiredIrisMode;
-(long long)desiredFilterType;
-(long long)irisAndFilterConflictingControl;
@end

