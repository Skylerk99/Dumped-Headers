/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, SSKeybagRequest, NSArray;

@interface KeybagRequestOperation : ISOperation {

	NSString* _clientIdentifierHeader;
	SSKeybagRequest* _request;
	NSString* _userAgent;
	NSArray* _claimedBundleIdentifiers;

}

@property (readonly) NSArray * claimedBundleIdentifiers;              //@synthesize claimedBundleIdentifiers=_claimedBundleIdentifiers - In the implementation block
-(id)initWithKeybagRequest:(id)arg1 clientIdentifierHeader:(id)arg2 userAgent:(id)arg3 ;
-(NSArray *)claimedBundleIdentifiers;
-(void)_getDownloaderIdentifier:(id*)arg1 purchaserIdentifier:(id*)arg2 forApplication:(id)arg3 ;
-(id)initWithKeybagRequest:(id)arg1 client:(id)arg2 ;
-(void)run;
@end

