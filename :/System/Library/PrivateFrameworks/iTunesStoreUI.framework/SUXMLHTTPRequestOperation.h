/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties;

@interface SUXMLHTTPRequestOperation : ISOperation {

	/*^block*/id _outputBlock;
	SSURLRequestProperties* _requestProperties;

}

@property (copy) id outputBlock; 
-(void)run;
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(id)outputBlock;
-(BOOL)_isAllowedURL:(id)arg1 withURLBag:(id)arg2 ;
@end

