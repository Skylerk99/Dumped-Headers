/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIAppearanceCustomizableClassInfo : NSObject {

	BOOL _isGuideClassRoot;
	BOOL _isCustomizableViewClassRoot;
	NSString* _classReferenceKey;
	unsigned long long _hash;
	Class _customizableViewClass;
	Class _guideClass;

}

@property (nonatomic,readonly) Class _customizableViewClass;               //@synthesize customizableViewClass=_customizableViewClass - In the implementation block
@property (nonatomic,readonly) Class _guideClass;                          //@synthesize guideClass=_guideClass - In the implementation block
@property (nonatomic,readonly) NSString * _classReferenceKey;              //@synthesize classReferenceKey=_classReferenceKey - In the implementation block
@property (nonatomic,readonly) unsigned long long _hash;                   //@synthesize hash=_hash - In the implementation block
+(id)_customizableClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2 ;
+(id)_cachedClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(Class)_customizableViewClass;
-(NSString *)_classReferenceKey;
-(Class)_guideClass;
-(id)_superClassInfo;
-(unsigned long long)_hash;
@end

