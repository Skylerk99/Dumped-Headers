/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNSmileDetector : NSObject {

	CNNModel* _model;
	CNNData* _input;

}
-(id)init;
-(int)detectSmileForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 smile:(BOOL*)arg3 ;
@end

