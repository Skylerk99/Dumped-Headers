/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber, NSURL;

@interface BRQueryStitch : NSObject {

	NSArray* _queries;
	NSNumber* _objid;
	char _kind;
	NSURL* _fromURL;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * fromURL;                //@synthesize fromURL=_fromURL - In the implementation block
@property (nonatomic,retain) NSArray * queries;              //@synthesize queries=_queries - In the implementation block
-(void)dealloc;
-(id)description;
-(void)done;
-(void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
-(void)_creationDone;
-(void)_renameDone;
-(void)_deletionDone;
-(id)initWithURL:(id)arg1 objid:(id)arg2 kind:(char)arg3 ;
-(NSURL *)fromURL;
-(void)setFromURL:(NSURL *)arg1 ;
-(void)setQueries:(NSArray *)arg1 ;
-(NSArray *)queries;
@end

