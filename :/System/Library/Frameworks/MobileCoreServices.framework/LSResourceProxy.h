/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, NSArray, LSApplicationProxy;

@interface LSResourceProxy : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localizedName;
	NSString* _boundApplicationIdentifier;
	NSURL* _boundContainerURL;
	NSURL* _boundDataContainerURL;
	NSURL* _boundResourcesDirURL;
	NSDictionary* _boundIconsDictionary;
	NSString* _boundIconCacheKey;
	NSArray* _boundIconFileNames;
	LSApplicationProxy* _typeOwner;
	BOOL _boundIconIsPrerendered;
	BOOL _boundIconIsBadge;

}

@property (nonatomic,readonly) NSString * localizedName;                    //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) BOOL boundIconIsBadge; 
@property (nonatomic,readonly) NSDictionary * iconsDictionary; 
+(long long)_compareApplicationIconCanvasSize:(CGSize)arg1 withSize:(CGSize)arg2 ;
+(CGSize)_applicationIconCanvasSize;
+(id)allowedClasses;
+(BOOL)supportsSecureCoding;
-(SCD_Struct_LS4*)_iconDefinitionForSize:(CGSize)arg1 style:(id)arg2 ;
-(SCD_Struct_LS4*)_iconVariantDefinitions:(id)arg1 ;
-(CGSize)_largestImageSize:(id)arg1 ;
-(CGSize)_defaultStyleSize:(id)arg1 ;
-(id)_iconForStyle:(id)arg1 size:(CGSize)arg2 ;
-(id)_iconForStyle:(id)arg1 ;
-(void)setBoundApplicationIdentifier:(id)arg1 ;
-(void)setBoundContainerURL:(id)arg1 ;
-(void)setBoundDataContainerURL:(id)arg1 ;
-(void)setBoundResourcesDirectoryURL:(id)arg1 ;
-(void)setBoundIconsDictionary:(id)arg1 ;
-(void)setBoundIconCacheKey:(id)arg1 ;
-(void)setBoundIconFileNames:(id)arg1 ;
-(void)setTypeOwner:(id)arg1 ;
-(void)setBoundIconIsPrerendered:(BOOL)arg1 ;
-(void)setBoundIconIsBadge:(BOOL)arg1 ;
-(id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundContainerURL:(id)arg3 dataContainerURL:(id)arg4 boundResourcesDirectoryURL:(id)arg5 boundIconsDictionary:(id)arg6 boundIconCacheKey:(id)arg7 boundIconFileNames:(id)arg8 typeOwner:(id)arg9 boundIconIsPrerendered:(BOOL)arg10 boundIconIsBadge:(BOOL)arg11 ;
-(id)boundIconsDictionary;
-(id)typeOwner;
-(id)boundResourcesDirectoryURL;
-(id)boundApplicationIdentifier;
-(id)boundContainerURL;
-(id)iconStyleDomain;
-(id)boundIconCacheKey;
-(BOOL)boundIconIsPrerendered;
-(id)boundIconFileNames;
-(id)boundDataContainerURL;
-(id)_initWithLocalizedName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)iconDataForVariant:(int)arg1 ;
-(NSString *)localizedName;
-(id)uniqueIdentifier;
-(BOOL)boundIconIsBadge;
-(id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4 ;
-(NSDictionary *)iconsDictionary;
-(void)setLocalizedName:(NSString *)arg1 ;
@end

