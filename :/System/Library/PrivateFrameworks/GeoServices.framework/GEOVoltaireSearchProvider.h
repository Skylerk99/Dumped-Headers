/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOSearchProvider.h>
#import <libobjc.A.dylib/PBRequesterDelegate.h>

@class GEORequester, NSString;

@interface GEOVoltaireSearchProvider : GEOSearchProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/id _finished;
	BOOL _cancelled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)search:(id)arg1 timeout:(long long)arg2 useBackgroundConnection:(BOOL)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
@end

