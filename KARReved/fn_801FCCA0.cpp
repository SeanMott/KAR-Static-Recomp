//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8020E178.hpp"
#include "fn_80201FE8.hpp"
#include "fn_TLComponent_SetActiveSlide_TakeParam_UnsignedLong.hpp"
#include "fn_8020C678.hpp"
#include "fn_8020D514.hpp"
#include "fn_802001BC.hpp"
#include "fn_80204C88.hpp"
#include "fn_80201B18.hpp"
#include "fn_8020B520.hpp"
#include "fn_8019C9BC.hpp"



void fn_801FCCA0(PPC::Runtime::GCContext* context)
{
/*801FCCA0 001F9AA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FCCA4 001F9AA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FCCA8 001F9AA8*/ PPC::Runtime::ASM::lis(context->r4, lbl_8055A130 @ Get_MemoryOffset_HighBit);
/*801FCCAC 001F9AAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FCCB0 001F9AB0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FCCB4 001F9AB4*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_8055A130 @ Get_MemoryOffset_LowBit);
/*801FCCB8 001F9AB8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FCCBC 001F9ABC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801FCCC0 001F9AC0*/ PPC::Runtime::ASM::bl(fn_8020E178);
/*801FCCC4 001F9AC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCCC8 001F9AC8*/ PPC::Runtime::ASM::bl(fn_80201FE8);
/*801FCCCC 001F9ACC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r30));
/*801FCCD0 001F9AD0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801FCCD4 001F9AD4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 3, 28, 28);
/*801FCCD8 001F9AD8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCCDC 001F9ADC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r30));
/*801FCCE0 001F9AE0*/ PPC::Runtime::ASM::bl(fn_TLComponent_SetActiveSlide_TakeParam_UnsignedLong);
/*801FCCE4 001F9AE4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCCE8 001F9AE8*/ PPC::Runtime::ASM::bl(fn_8020C678);
/*801FCCEC 001F9AEC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCCF0 001F9AF0*/ PPC::Runtime::ASM::bl(fn_8020D514);
/*801FCCF4 001F9AF4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCCF8 001F9AF8*/ PPC::Runtime::ASM::bl(fn_802001BC);
/*801FCCFC 001F9AFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801FCD00 001F9B00*/ PPC::Runtime::ASM::lis(context->r3, StructOfStructStuff_1 @ Get_MemoryOffset_HighBit);
/*801FCD04 001F9B04*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructOfStructStuff_1 @ Get_MemoryOffset_LowBit);
/*801FCD08 001F9B08*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801FCD0C 001F9B0C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801FCD10 001F9B10*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801FCD14 001F9B14*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801FCD18 001F9B18*/ PPC::Runtime::ASM::beq(.L_801FCD28);
/*801FCD1C 001F9B1C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCD20 001F9B20*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801FCD24 001F9B24*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801FCD28, 0x801FCD28) //this is a jump label
/*801FCD28 001F9B28*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCD2C 001F9B2C*/ PPC::Runtime::ASM::bl(fn_80204C88);
/*801FCD30 001F9B30*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCD34 001F9B34*/ PPC::Runtime::ASM::bl(fn_80201B18);
/*801FCD38 001F9B38*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCD3C 001F9B3C*/ PPC::Runtime::ASM::bl(fn_8020B520);
/*801FCD40 001F9B40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801FCD44 001F9B44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801FCD48 001F9B48*/ PPC::Runtime::ASM::bl(fn_8019C9BC);
/*801FCD4C 001F9B4C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r30));
/*801FCD50 001F9B50*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*801FCD54 001F9B54*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*801FCD58 001F9B58*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2bc, context->r30));
/*801FCD5C 001F9B5C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x58);
/*801FCD60 001F9B60*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*801FCD64 001F9B64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c4, context->r30));
/*801FCD68 001F9B68*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x84);
/*801FCD6C 001F9B6C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*801FCD70 001F9B70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40c, context->r30));
/*801FCD74 001F9B74*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xb0);
/*801FCD78 001F9B78*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*801FCD7C 001F9B7C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801FCD80 001F9B80*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*801FCD84 001F9B84*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
/*801FCD88 001F9B88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FCD8C 001F9B8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FCD90 001F9B90*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FCD94 001F9B94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FCD98 001F9B98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FCD9C 001F9B9C*/ PPC::Runtime::ASM::blr();
}