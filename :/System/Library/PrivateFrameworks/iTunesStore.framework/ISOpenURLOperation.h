/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {

	ISOpenURLRequest* _request;

}

@property (readonly) ISOpenURLRequest * openURLRequest; 
-(void)dealloc;
-(id)init;
-(BOOL)_openURL:(id)arg1 ;
-(void)run;
-(id)initWithOpenURLRequest:(id)arg1 ;
-(id)_newSortedTargetsArray;
-(ISOpenURLRequest *)openURLRequest;
@end

