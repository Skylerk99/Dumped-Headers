/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSKChangeRecord : NSObject {

	int mKind;
	id mDetails;

}

@property (nonatomic,readonly) int kind; 
@property (nonatomic,readonly) id details; 
@property (nonatomic,readonly) BOOL allowedInCommit; 
+(id)changeRecordWithKind:(int)arg1 details:(id)arg2 ;
-(id)initWithKind:(int)arg1 details:(id)arg2 ;
-(BOOL)allowedInCommit;
-(void)dealloc;
-(int)kind;
-(id)details;
@end

