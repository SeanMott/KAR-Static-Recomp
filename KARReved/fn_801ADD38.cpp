//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801ADF5C.hpp"
#include "fn_80204234.hpp"
#include "fn_801ADEB0.hpp"



void fn_801ADD38(PPC::Runtime::GCContext* context)
{
/*801ADD38 001AAB38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801ADD3C 001AAB3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801ADD40 001AAB40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801ADD44 001AAB44*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ADD48 001AAB48*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ADD4C 001AAB4C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADD50 001AAB50*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801ADD54 001AAB54*/ PPC::Runtime::ASM::bl(fn_801ADF5C);
/*801ADD58 001AAB58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801ADD5C 001AAB5C*/ PPC::Runtime::ASM::beq(.L_801ADD94);
/*801ADD60 001AAB60*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801ADD64 001AAB64*/ PPC::Runtime::ASM::mr(context->r31, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_801ADD68, 0x801ADD68) //this is a jump label
/*801ADD68 001AAB68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8f0, context->r31));
/*801ADD6C 001AAB6C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801ADD70 001AAB70*/ PPC::Runtime::ASM::beq(.L_801ADD7C);
/*801ADD74 001AAB74*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*801ADD78 001AAB78*/ PPC::Runtime::ASM::bl(fn_80204234);
RUNTIME_PPC_JUMP_LABEL(.L_801ADD7C, 0x801ADD7C) //this is a jump label
/*801ADD7C 001AAB7C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801ADD80 001AAB80*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*801ADD84 001AAB84*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*801ADD88 001AAB88*/ PPC::Runtime::ASM::blt(.L_801ADD68);
/*801ADD8C 001AAB8C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801ADD90 001AAB90*/ PPC::Runtime::ASM::bl(fn_801ADEB0);
RUNTIME_PPC_JUMP_LABEL(.L_801ADD94, 0x801ADD94) //this is a jump label
/*801ADD94 001AAB94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r29));
/*801ADD98 001AAB98*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r3));
/*801ADD9C 001AAB9C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801ADDA0 001AABA0*/ PPC::Runtime::ASM::bne(.L_801ADDB4);
/*801ADDA4 001AABA4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F60 @ Get_MemoryOffset_SDA21);
/*801ADDA8 001AABA8*/ PPC::Runtime::ASM::li(context->r4, 0x2b8);
/*801ADDAC 001AABAC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F68 @ Get_MemoryOffset_SDA21);
/*801ADDB0 001AABB0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801ADDB4, 0x801ADDB4) //this is a jump label
/*801ADDB4 001AABB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801ADDB8 001AABB8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*801ADDBC 001AABBC*/ PPC::Runtime::ASM::beq(.L_801ADDD4);
/*801ADDC0 001AABC0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AF640 @ Get_MemoryOffset_HighBit);
/*801ADDC4 001AABC4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F60 @ Get_MemoryOffset_SDA21);
/*801ADDC8 001AABC8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AF640 @ Get_MemoryOffset_LowBit);
/*801ADDCC 001AABCC*/ PPC::Runtime::ASM::li(context->r4, 0x2b9);
/*801ADDD0 001AABD0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801ADDD4, 0x801ADDD4) //this is a jump label
/*801ADDD4 001AABD4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1438 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ADDD8 001AABD8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*801ADDDC 001AABDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801ADDE0 001AABE0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801ADDE4 001AABE4*/ PPC::Runtime::ASM::bne(.L_801ADE30);
/*801ADDE8 001AABE8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801ADDEC 001AABEC*/ PPC::Runtime::ASM::beq(.L_801ADE30);
/*801ADDF0 001AABF0*/ PPC::Runtime::ASM::bne(.L_801ADE04);
/*801ADDF4 001AABF4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F60 @ Get_MemoryOffset_SDA21);
/*801ADDF8 001AABF8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801ADDFC 001AABFC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F68 @ Get_MemoryOffset_SDA21);
/*801ADE00 001AAC00*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801ADE04, 0x801ADE04) //this is a jump label
/*801ADE04 001AAC04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801ADE08 001AAC08*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801ADE0C 001AAC0C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801ADE10 001AAC10*/ PPC::Runtime::ASM::bne(.L_801ADE20);
/*801ADE14 001AAC14*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801ADE18 001AAC18*/ PPC::Runtime::ASM::beq(.L_801ADE20);
/*801ADE1C 001AAC1C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801ADE20, 0x801ADE20) //this is a jump label
/*801ADE20 001AAC20*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801ADE24 001AAC24*/ PPC::Runtime::ASM::bne(.L_801ADE30);
/*801ADE28 001AAC28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801ADE2C 001AAC2C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801ADE30, 0x801ADE30) //this is a jump label
/*801ADE30 001AAC30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801ADE34 001AAC34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ADE38 001AAC38*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ADE3C 001AAC3C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADE40 001AAC40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ADE44 001AAC44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801ADE48 001AAC48*/ PPC::Runtime::ASM::blr();
}