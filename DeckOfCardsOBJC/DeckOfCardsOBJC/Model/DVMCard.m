//
//  DVMCard.m
//  DeckOfCardsOBJC
//
//  Created by Austin West on 5/21/19.
//  Copyright © 2019 Austin West. All rights reserved.
//

#import "DVMCard.h"

@implementation DVMCard


-(instancetype)initWithSuit: (NSString *)suit image: (NSString *)image {
    
    
    self = [super init ];
    if (self) {
        _suit = suit;
        _image = image;
    }
    return self;
}
@end
