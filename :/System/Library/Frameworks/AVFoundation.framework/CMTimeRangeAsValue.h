/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeRangeAsValue : NSValue {

	SCD_Struct_CM6 _timeRange;

}
+(id)valueWithCMTimeRange:(SCD_Struct_CM6)arg1 ;
-(SCD_Struct_CM6)CMTimeRangeValue;
-(id)description;
-(void)getValue:(void*)arg1 ;
-(const char*)objCType;
@end

