//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80134CC4.hpp"
#include "fn_80134CA4.hpp"
#include "fn_80134CC4.hpp"
#include "fn_80134CA4.hpp"
#include "fn_80134D04.hpp"
#include "fn_80134CE4.hpp"
#include "fn_80134CC4.hpp"
#include "fn_80134CA4.hpp"
#include "fn_80134D04.hpp"
#include "fn_80134CE4.hpp"
#include "fn_80134CC4.hpp"
#include "fn_80134CA4.hpp"
#include "fn_80134D04.hpp"
#include "fn_80134CE4.hpp"
#include "fn_80134CC4.hpp"
#include "fn_80134CA4.hpp"
#include "fn_80134D04.hpp"
#include "fn_80134CE4.hpp"



void fn_8002AA70(PPC::Runtime::GCContext* context)
{
/*8002AA70 00027870*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8002AA74 00027874*/ PPC::Runtime::ASM::mflr(context->r0);
/*8002AA78 00027878*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8002AA7C 0002787C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8002AA80 00027880*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8002AA84 00027884*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8002AA88 00027888*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8002AA8C 0002788C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x197);
/*8002AA90 00027890*/ PPC::Runtime::ASM::extsb(context->r4, context->r31);
/*8002AA94 00027894*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r4);
/*8002AA98 00027898*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17, context->r3));
/*8002AA9C 0002789C*/ PPC::Runtime::ASM::lbz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r3));
/*8002AAA0 000278A0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002AAA4 000278A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8002AAA8 000278A8*/ PPC::Runtime::ASM::beq(.L_8002AB54);
/*8002AAAC 000278AC*/ PPC::Runtime::ASM::bge(.L_8002AABC);
/*8002AAB0 000278B0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8002AAB4 000278B4*/ PPC::Runtime::ASM::bge(.L_8002AAC8);
/*8002AAB8 000278B8*/ PPC::Runtime::ASM::b(.L_8002AC50);
RUNTIME_PPC_JUMP_LABEL(.L_8002AABC, 0x8002AABC) //this is a jump label
/*8002AABC 000278BC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8002AAC0 000278C0*/ PPC::Runtime::ASM::bge(.L_8002AC50);
/*8002AAC4 000278C4*/ PPC::Runtime::ASM::b(.L_8002ABA4);
RUNTIME_PPC_JUMP_LABEL(.L_8002AAC8, 0x8002AAC8) //this is a jump label
/*8002AAC8 000278C8*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8002AACC 000278CC*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8002AAD0 000278D0*/ PPC::Runtime::ASM::bne(.L_8002AAFC);
/*8002AAD4 000278D4*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*8002AAD8 000278D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r3));
/*8002AADC 000278DC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8002AAE0 000278E0*/ PPC::Runtime::ASM::bgt(.L_8002AAF0);
/*8002AAE4 000278E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AAE8 000278E8*/ PPC::Runtime::ASM::bl(fn_80134CC4);
/*8002AAEC 000278EC*/ PPC::Runtime::ASM::b(.L_8002AB24);
RUNTIME_PPC_JUMP_LABEL(.L_8002AAF0, 0x8002AAF0) //this is a jump label
/*8002AAF0 000278F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AAF4 000278F4*/ PPC::Runtime::ASM::bl(fn_80134CA4);
/*8002AAF8 000278F8*/ PPC::Runtime::ASM::b(.L_8002AB24);
RUNTIME_PPC_JUMP_LABEL(.L_8002AAFC, 0x8002AAFC) //this is a jump label
/*8002AAFC 000278FC*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*8002AB00 00027900*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r3));
/*8002AB04 00027904*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002AB08 00027908*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8002AB0C 0002790C*/ PPC::Runtime::ASM::bgt(.L_8002AB1C);
/*8002AB10 00027910*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AB14 00027914*/ PPC::Runtime::ASM::bl(fn_80134CC4);
/*8002AB18 00027918*/ PPC::Runtime::ASM::b(.L_8002AB24);
RUNTIME_PPC_JUMP_LABEL(.L_8002AB1C, 0x8002AB1C) //this is a jump label
/*8002AB1C 0002791C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AB20 00027920*/ PPC::Runtime::ASM::bl(fn_80134CA4);
RUNTIME_PPC_JUMP_LABEL(.L_8002AB24, 0x8002AB24) //this is a jump label
/*8002AB24 00027924*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8002AB28 00027928*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*8002AB2C 0002792C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r3));
/*8002AB30 00027930*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002AB34 00027934*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8002AB38 00027938*/ PPC::Runtime::ASM::blt(.L_8002AB48);
/*8002AB3C 0002793C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AB40 00027940*/ PPC::Runtime::ASM::bl(fn_80134D04);
/*8002AB44 00027944*/ PPC::Runtime::ASM::b(.L_8002AC50);
RUNTIME_PPC_JUMP_LABEL(.L_8002AB48, 0x8002AB48) //this is a jump label
/*8002AB48 00027948*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AB4C 0002794C*/ PPC::Runtime::ASM::bl(fn_80134CE4);
/*8002AB50 00027950*/ PPC::Runtime::ASM::b(.L_8002AC50);
RUNTIME_PPC_JUMP_LABEL(.L_8002AB54, 0x8002AB54) //this is a jump label
/*8002AB54 00027954*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8002AB58 00027958*/ PPC::Runtime::ASM::add(context->r30, context->r30, context->r0);
/*8002AB5C 0002795C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r30));
/*8002AB60 00027960*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8002AB64 00027964*/ PPC::Runtime::ASM::bgt(.L_8002AB74);
/*8002AB68 00027968*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AB6C 0002796C*/ PPC::Runtime::ASM::bl(fn_80134CC4);
/*8002AB70 00027970*/ PPC::Runtime::ASM::b(.L_8002AB7C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AB74, 0x8002AB74) //this is a jump label
/*8002AB74 00027974*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AB78 00027978*/ PPC::Runtime::ASM::bl(fn_80134CA4);
RUNTIME_PPC_JUMP_LABEL(.L_8002AB7C, 0x8002AB7C) //this is a jump label
/*8002AB7C 0002797C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f, context->r30));
/*8002AB80 00027980*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002AB84 00027984*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8002AB88 00027988*/ PPC::Runtime::ASM::blt(.L_8002AB98);
/*8002AB8C 0002798C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AB90 00027990*/ PPC::Runtime::ASM::bl(fn_80134D04);
/*8002AB94 00027994*/ PPC::Runtime::ASM::b(.L_8002AC50);
RUNTIME_PPC_JUMP_LABEL(.L_8002AB98, 0x8002AB98) //this is a jump label
/*8002AB98 00027998*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AB9C 0002799C*/ PPC::Runtime::ASM::bl(fn_80134CE4);
/*8002ABA0 000279A0*/ PPC::Runtime::ASM::b(.L_8002AC50);
RUNTIME_PPC_JUMP_LABEL(.L_8002ABA4, 0x8002ABA4) //this is a jump label
/*8002ABA4 000279A4*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8002ABA8 000279A8*/ PPC::Runtime::ASM::add(context->r30, context->r30, context->r0);
/*8002ABAC 000279AC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r30));
/*8002ABB0 000279B0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8002ABB4 000279B4*/ PPC::Runtime::ASM::bne(.L_8002AC00);
/*8002ABB8 000279B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r30));
/*8002ABBC 000279BC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002ABC0 000279C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8002ABC4 000279C4*/ PPC::Runtime::ASM::blt(.L_8002ABD4);
/*8002ABC8 000279C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002ABCC 000279CC*/ PPC::Runtime::ASM::bl(fn_80134CC4);
/*8002ABD0 000279D0*/ PPC::Runtime::ASM::b(.L_8002ABDC);
RUNTIME_PPC_JUMP_LABEL(.L_8002ABD4, 0x8002ABD4) //this is a jump label
/*8002ABD4 000279D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002ABD8 000279D8*/ PPC::Runtime::ASM::bl(fn_80134CA4);
RUNTIME_PPC_JUMP_LABEL(.L_8002ABDC, 0x8002ABDC) //this is a jump label
/*8002ABDC 000279DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r30));
/*8002ABE0 000279E0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8002ABE4 000279E4*/ PPC::Runtime::ASM::bgt(.L_8002ABF4);
/*8002ABE8 000279E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002ABEC 000279EC*/ PPC::Runtime::ASM::bl(fn_80134D04);
/*8002ABF0 000279F0*/ PPC::Runtime::ASM::b(.L_8002AC50);
RUNTIME_PPC_JUMP_LABEL(.L_8002ABF4, 0x8002ABF4) //this is a jump label
/*8002ABF4 000279F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002ABF8 000279F8*/ PPC::Runtime::ASM::bl(fn_80134CE4);
/*8002ABFC 000279FC*/ PPC::Runtime::ASM::b(.L_8002AC50);
RUNTIME_PPC_JUMP_LABEL(.L_8002AC00, 0x8002AC00) //this is a jump label
/*8002AC00 00027A00*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8002AC04 00027A04*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8002AC08 00027A08*/ PPC::Runtime::ASM::bne(.L_8002AC50);
/*8002AC0C 00027A0C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b, context->r30));
/*8002AC10 00027A10*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8002AC14 00027A14*/ PPC::Runtime::ASM::bgt(.L_8002AC24);
/*8002AC18 00027A18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AC1C 00027A1C*/ PPC::Runtime::ASM::bl(fn_80134CC4);
/*8002AC20 00027A20*/ PPC::Runtime::ASM::b(.L_8002AC2C);
RUNTIME_PPC_JUMP_LABEL(.L_8002AC24, 0x8002AC24) //this is a jump label
/*8002AC24 00027A24*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AC28 00027A28*/ PPC::Runtime::ASM::bl(fn_80134CA4);
RUNTIME_PPC_JUMP_LABEL(.L_8002AC2C, 0x8002AC2C) //this is a jump label
/*8002AC2C 00027A2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b, context->r30));
/*8002AC30 00027A30*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002AC34 00027A34*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8002AC38 00027A38*/ PPC::Runtime::ASM::blt(.L_8002AC48);
/*8002AC3C 00027A3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AC40 00027A40*/ PPC::Runtime::ASM::bl(fn_80134D04);
/*8002AC44 00027A44*/ PPC::Runtime::ASM::b(.L_8002AC50);
RUNTIME_PPC_JUMP_LABEL(.L_8002AC48, 0x8002AC48) //this is a jump label
/*8002AC48 00027A48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8002AC4C 00027A4C*/ PPC::Runtime::ASM::bl(fn_80134CE4);
RUNTIME_PPC_JUMP_LABEL(.L_8002AC50, 0x8002AC50) //this is a jump label
/*8002AC50 00027A50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8002AC54 00027A54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8002AC58 00027A58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8002AC5C 00027A5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8002AC60 00027A60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8002AC64 00027A64*/ PPC::Runtime::ASM::blr();
}