/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CAMTransientImageManagerRequest : NSObject {

	BOOL _isCanceled;
	BOOL _isFinished;
	NSString* _uuid;
	/*^block*/id _resultHandler;

}

@property (nonatomic,copy) NSString * uuid;                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) id resultHandler;               //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL isCanceled;              //@synthesize isCanceled=_isCanceled - In the implementation block
@property (assign,nonatomic) BOOL isFinished;              //@synthesize isFinished=_isFinished - In the implementation block
-(NSString *)uuid;
-(BOOL)isFinished;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(void)setIsCanceled:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(BOOL)isCanceled;
-(void)setUuid:(NSString *)arg1 ;
@end

