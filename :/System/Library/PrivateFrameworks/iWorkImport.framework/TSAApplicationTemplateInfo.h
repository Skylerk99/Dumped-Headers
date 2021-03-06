/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSATemplateInfo.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSBundle;

@interface TSAApplicationTemplateInfo : TSATemplateInfo <NSCopying> {

	NSString* _name;
	NSString* _documentVariant;
	NSString* _previewVariant;

}

@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * documentVariant;                          //@synthesize documentVariant=_documentVariant - In the implementation block
@property (nonatomic,readonly) NSString * previewVariant;                           //@synthesize previewVariant=_previewVariant - In the implementation block
@property (nonatomic,readonly) NSURL * documentContainerURL; 
@property (nonatomic,readonly) long long downloadState; 
@property (nonatomic,readonly) NSURL * templateZipURL; 
@property (nonatomic,readonly) NSURL * downloadedDocumentContainerURL; 
@property (nonatomic,readonly) NSBundle * previewBundle; 
@property (nonatomic,readonly) NSURL * bundledDocumentContainerURL; 
+(id)documentURLWithDocumentContainerURL:(id)arg1 variant:(id)arg2 ;
+(id)localizationBundleForDocumentContainerURL:(id)arg1 ;
+(id)bundledDocumentContainerDirectoryURL;
+(id)downloadedDocumentContainerDirectoryURL;
+(id)templateZipURLForTemplateName:(id)arg1 ;
+(id)localizationBundleForDocumentURL:(id)arg1 ;
+(void)setBundledDocumentContainerDirectoryURL:(id)arg1 ;
-(id)initHeadlessWithName:(id)arg1 ;
-(id)initHeadlessWithName:(id)arg1 variant:(unsigned long long)arg2 ;
-(id)initWithDisplayName:(id)arg1 name:(id)arg2 documentVariant:(id)arg3 previewVariant:(id)arg4 ;
-(NSString *)documentVariant;
-(NSBundle *)previewBundle;
-(NSURL *)documentContainerURL;
-(id)documentURLWithDocumentContainerURL:(id)arg1 ;
-(NSURL *)templateZipURL;
-(NSURL *)bundledDocumentContainerURL;
-(NSURL *)downloadedDocumentContainerURL;
-(id)initWithPropertyList:(id)arg1 documentVariant:(id)arg2 previewVariant:(id)arg3 ;
-(id)initHeadlessWithName:(id)arg1 variant:(unsigned long long)arg2 locale:(CFLocaleRef)arg3 ;
-(id)makeIdentifier;
-(BOOL)isAvailable;
-(long long)downloadState;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)documentURL;
-(id)previewImageURL;
-(NSString *)previewVariant;
-(id)localizationBundle;
@end

