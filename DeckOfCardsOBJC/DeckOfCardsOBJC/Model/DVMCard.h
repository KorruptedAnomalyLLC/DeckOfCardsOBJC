//
//  DVMCard.h
//  DeckOfCardsOBJC
//
//  Created by Austin West on 5/21/19.
//  Copyright © 2019 Austin West. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DVMCard : NSObject

@property (nonatomic, copy, readonly) NSString *suit;
@property (nonatomic, copy, readonly)NSString *image;

-(instancetype)initWithSuit: (NSString *)suit image: (NSString *)image;

@end

NS_ASSUME_NONNULL_END
