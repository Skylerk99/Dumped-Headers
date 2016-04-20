/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKPaymentOptionGroupItem : NSObject {

	BOOL _selectable;
	BOOL _editable;
	BOOL _deletable;
	NSString* _groupType;
	id _referenceObject;
	NSString* _title;
	NSString* _detail;

}

@property (nonatomic,readonly) NSString * groupType;                           //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) id referenceObject;                             //@synthesize referenceObject=_referenceObject - In the implementation block
@property (nonatomic,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * detail;                              //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) Class tableViewCellClass; 
@property (assign,getter=isSelectable,nonatomic) BOOL selectable;              //@synthesize selectable=_selectable - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                  //@synthesize editable=_editable - In the implementation block
@property (assign,getter=isDeletable,nonatomic) BOOL deletable;                //@synthesize deletable=_deletable - In the implementation block
+(id)_singleLineGroupTypes;
-(NSString *)detail;
-(id)referenceObject;
-(id)initWithReferenceObject:(id)arg1 title:(id)arg2 detail:(id)arg3 groupType:(id)arg4 ;
-(void)setDeletable:(BOOL)arg1 ;
-(NSString *)groupType;
-(BOOL)isEqualToOptionGroupItem:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(BOOL)isEditable;
-(void)setEditable:(BOOL)arg1 ;
-(void)setSelectable:(BOOL)arg1 ;
-(BOOL)isSelectable;
-(Class)tableViewCellClass;
-(BOOL)isDeletable;
@end

