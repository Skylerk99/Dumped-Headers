/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorTile.h>

@class NSMutableArray, VK3DObjectSubTile, VKAnimation;

@interface VKBuildingTile : VKVectorTile {

	vector<std::__1::shared_ptr<ggl::Texture2D>, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > >* _facadeTextures;
	NSMutableArray* _polygonGroups[3];
	VK3DObjectSubTile* _objectSubTile;
	unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> >* _shadowTexture;
	Matrix<double, 4, 4> _shadowModelMatrix;
	shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >* _shadowViewConstantData;
	float _alpha;
	float _scale;
	float _minLayeringHeight;
	float _maxLayeringHeight;
	double _maxHeight;
	CullingGridWithHeight _cullingGrid;
	FogInfo* _fogInfo;
	VKAnimation* _animation;
	VKAnimation* _animationForPitch;

}

@property (nonatomic,readonly) VK3DObjectSubTile * objectSubTile;                                                         //@synthesize objectSubTile=_objectSubTile - In the implementation block
@property (nonatomic,readonly) Texture2D* shadowTexture; 
@property (nonatomic,readonly) shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >* shadowViewConstantData; 
@property (assign,nonatomic) float alpha;                                                                                 //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float scale;                                                                                 //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) float minLayeringHeight;                                                                   //@synthesize minLayeringHeight=_minLayeringHeight - In the implementation block
@property (nonatomic,readonly) float maxLayeringHeight;                                                                   //@synthesize maxLayeringHeight=_maxLayeringHeight - In the implementation block
@property (nonatomic,readonly) double maxHeight;                                                                          //@synthesize maxHeight=_maxHeight - In the implementation block
@property (nonatomic,retain) VKAnimation * animation;                                                                     //@synthesize animation=_animation - In the implementation block
@property (nonatomic,retain) VKAnimation * animationForPitch;                                                             //@synthesize animationForPitch=_animationForPitch - In the implementation block
@property (nonatomic,readonly) CullingGridWithHeight cullingGrid;                                                         //@synthesize cullingGrid=_cullingGrid - In the implementation block
@property (nonatomic,readonly) FogInfo* fogInfo; 
-(void)dealloc;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(VKAnimation *)animation;
-(void)setAnimation:(VKAnimation *)arg1 ;
-(double)maxHeight;
-(void)updateViewDependentStateWithContext:(id)arg1 ;
-(void)updateViewDependentStateIfNecessaryWithContext:(id)arg1 ;
-(CullingGridWithHeight)cullingGrid;
-(FogInfo*)fogInfo;
-(void)setAnimationForPitch:(VKAnimation *)arg1 ;
-(VKAnimation *)animationForPitch;
-(float)maxLayeringHeight;
-(Texture2D*)shadowTexture;
-(unsigned long long)numberOfFacadeTextures;
-(float)minLayeringHeight;
-(void)updateWithStyleResolutionSession:(StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >Ref)arg1 ;
-(id)polygonGroupsForTextureAtIndex:(unsigned long long)arg1 ;
-(BOOL)heightAtPoint:(const Matrix<float, 2, 1>*)arg1 outZ:(float*)arg2 ;
-(const vector<std::__1::shared_ptr<ggl::Texture2D>, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > >*)facadeTextures;
-(shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >*)shadowViewConstantData;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 prepareExtrusion:(BOOL)arg3 styleManager:(shared_ptr<gss::StyleManager>*)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(Device*)arg7 ;
-(VK3DObjectSubTile *)objectSubTile;
-(void)_fillShadowAreasInContext:(CGContextRef)arg1 data:(char*)arg2 ;
-(Box<float, 2>)_shadowBounds;
-(void)buildMeshesWithTriangulator:(id)arg1 device:(Device*)arg2 prepareExtrusion:(BOOL)arg3 ;
-(void)confirmBuildingSuppression:(SCD_Struct_VK594*)arg1 ;
-(void)_blurTexture:(char*)arg1 ;
-(void)_buildShadowTexture;
@end

