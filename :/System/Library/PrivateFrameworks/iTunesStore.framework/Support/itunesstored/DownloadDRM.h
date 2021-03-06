/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, SinfsArray;

@interface DownloadDRM : NSObject {

	NSArray* _sinfs;

}

@property (getter=isDRMFree,readonly) BOOL DRMFree; 
@property (readonly) NSArray * sinfs;                            //@synthesize sinfs=_sinfs - In the implementation block
@property (readonly) SinfsArray * pinfsArray; 
@property (readonly) SinfsArray * sinfsArray; 
-(id)initWithSinfArray:(id)arg1 ;
-(SinfsArray *)sinfsArray;
-(SinfsArray *)pinfsArray;
-(id)firstDataForSinfDataKey:(id)arg1 ;
-(id)_sinfsArrayWithDataKey:(id)arg1 ;
-(id)sinfForIdentifier:(long long)arg1 ;
-(NSArray *)sinfs;
-(void)dealloc;
-(id)init;
-(BOOL)isDRMFree;
@end

