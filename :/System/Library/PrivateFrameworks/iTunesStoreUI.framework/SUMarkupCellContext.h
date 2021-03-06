/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUItemCellContext.h>

@class NSString;

@interface SUMarkupCellContext : SUItemCellContext {

	long long _pendingWebViewLoads;
	NSString* _stylesheet;
	CFDictionaryRef _webViewCache;
	double _webViewWidth;

}

@property (nonatomic,retain) NSString * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
@property (assign,nonatomic) double webViewWidth;                //@synthesize webViewWidth=_webViewWidth - In the implementation block
-(void)dealloc;
-(NSString *)stylesheet;
-(void)setStylesheet:(NSString *)arg1 ;
-(void)webViewDidFinishLoading:(id)arg1 ;
-(id)webViewForMarkup:(id)arg1 ;
-(double)webViewWidth;
-(void)setWebViewWidth:(double)arg1 ;
@end

