/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSExtension, NSString, NSArray;

@interface _UIDocumentPickerDescriptor : NSObject {

	BOOL _newlyAdded;
	NSExtension* _extension;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSArray * supportedContentTypes; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,getter=isNewlyAdded,nonatomic) BOOL newlyAdded;                        //@synthesize newlyAdded=_newlyAdded - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                    //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy,readonly) NSString * nonUIIdentifier; 
@property (nonatomic,retain,readonly) NSString * fileProviderDocumentGroup; 
+(id)pickerOrder;
+(id)hostBundleID;
+(id)allPickers;
+(id)allPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2 ;
+(id)enabledPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2 ;
+(void)setHostBundleID:(id)arg1 ;
+(id)manageablePickers;
+(id)defaultPickerIdentifierForMode:(unsigned long long)arg1 documentTypes:(id)arg2 ;
+(id)descriptorWithIdentifier:(id)arg1 ;
+(void)setCloudEnabledStatus:(char)arg1 ;
+(char)cloudEnabledStatus;
+(void)setOrderFromPickers:(id)arg1 ;
-(BOOL)enabled;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)localizedName;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(BOOL)isNewlyAdded;
-(void)setNewlyAdded:(BOOL)arg1 ;
-(BOOL)supportsPickerMode:(unsigned long long)arg1 ;
-(NSArray *)supportedContentTypes;
-(BOOL)pickerEnabledForMode:(unsigned long long)arg1 documentTypes:(id)arg2 reason:(id*)arg3 ;
-(id)_extensionValueOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)_ownBundle;
-(id)_parentApp;
-(id)nonUIBundle;
-(NSString *)fileProviderDocumentGroup;
-(NSString *)nonUIIdentifier;
-(id)imageWithScale:(double)arg1 ;
@end

