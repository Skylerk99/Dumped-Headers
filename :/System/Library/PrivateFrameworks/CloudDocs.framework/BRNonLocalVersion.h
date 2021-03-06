/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSDate, GSPermanentStorage;

@interface BRNonLocalVersion : NSObject {

	NSURL* _url;
	NSString* _displayName;
	NSString* _etag;
	unsigned long long _size;
	NSDate* _modificationDate;
	NSString* _lastEditorDeviceName;
	NSString* _lastEditorFormattedName;
	BOOL _hasThumbnail;
	GSPermanentStorage* _versionsStore;
	long long _sandboxHandle;
	NSURL* _physicalURL;

}

@property (nonatomic,readonly) NSURL * url;                                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * etag;                                                 //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier; 
@property (nonatomic,readonly) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                       //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) NSString * lastEditorDeviceName;                                 //@synthesize lastEditorDeviceName=_lastEditorDeviceName - In the implementation block
@property (nonatomic,readonly) NSString * lastEditorFormattedName;                              //@synthesize lastEditorFormattedName=_lastEditorFormattedName - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnail;                                                 //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (nonatomic,readonly) BOOL isLatestVersion; 
+(id)listVersionsOfDocumentAtURL:(id)arg1 ;
-(NSString *)lastEditorFormattedName;
-(unsigned long long)size;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(NSDate *)modificationDate;
-(NSString *)displayName;
-(BOOL)isLatestVersion;
-(id)initWithURL:(id)arg1 physicalURL:(id)arg2 size:(id)arg3 extension:(id)arg4 etag:(id)arg5 hasThumbnail:(BOOL)arg6 displayName:(id)arg7 lastEditorDeviceName:(id)arg8 lastEditorFormattedName:(id)arg9 modificationDate:(id)arg10 versionsStore:(id)arg11 ;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(NSString *)lastEditorDeviceName;
-(NSString *)etag;
-(BOOL)hasThumbnail;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
@end

