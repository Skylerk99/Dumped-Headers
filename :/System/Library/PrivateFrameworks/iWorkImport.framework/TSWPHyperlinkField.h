/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPSmartField.h>

@class NSURL, NSString;

@interface TSWPHyperlinkField : TSWPSmartField {

	NSURL* _url;

}

@property (setter=setURL:,nonatomic,retain) NSURL * url; 
@property (nonatomic,readonly) NSString * displayText; 
+(id)defaultFieldStyleIdentifier;
+(BOOL)schemeIsValidForURL:(id)arg1 ;
+(BOOL)schemeIsValidForURLReference:(id)arg1 ;
+(id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2 ;
+(id)defaultFileURL;
+(id)defaultMailURL;
+(id)newURLFromURLReference:(id)arg1 ;
+(id)urlReferenceFromURL:(id)arg1 ;
+(int)schemeFromURL:(id)arg1 ;
+(id)defaultWebURL;
+(id)urlWithEmailAddress:(id)arg1 subject:(id)arg2 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 url:(id)arg2 ;
-(void)saveToArchive:(HyperlinkFieldArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const HyperlinkFieldArchive*)arg1 unarchiver:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(int)smartFieldKind;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 storage:(id)arg2 ;
-(id)urlReference;
-(void)setURLReference:(id)arg1 ;
-(void)p_performHyperlinkSelector:(SEL)arg1 onStorage:(id)arg2 ;
-(id)urlPrefix;
-(BOOL)hasDisplayText;
-(NSString *)displayText;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)url;
-(int)scheme;
-(BOOL)isFileURL;
-(void)setURL:(id)arg1 ;
-(BOOL)allowsEditing;
-(id)filePath;
-(id)fullPath;
@end

