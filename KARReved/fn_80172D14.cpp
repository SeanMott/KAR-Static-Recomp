//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"



void fn_80172D14(PPC::Runtime::GCContext* context)
{
/*80172D14 0016FB14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80172D18 0016FB18*/ PPC::Runtime::ASM::mflr(context->r0);
/*80172D1C 0016FB1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80172D20 0016FB20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80172D24 0016FB24*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80172D28 0016FB28*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80172D2C 0016FB2C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80172D30 0016FB30*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80172D34 0016FB34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80172D38 0016FB38*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80172D3C 0016FB3C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*80172D40 0016FB40*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80172D44 0016FB44*/ PPC::Runtime::ASM::mr(context->r30, context->r28);
/*80172D48 0016FB48*/ PPC::Runtime::ASM::mr(context->r29, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_80172D4C, 0x80172D4C) //this is a jump label
/*80172D4C 0016FB4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80172D50 0016FB50*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x2c);
/*80172D54 0016FB54*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80172D58 0016FB58*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80172D5C 0016FB5C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80172D60 0016FB60*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*80172D64 0016FB64*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*80172D68 0016FB68*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0xc);
/*80172D6C 0016FB6C*/ PPC::Runtime::ASM::blt(.L_80172D4C);
/*80172D70 0016FB70*/ PPC::Runtime::ASM::mr(context->r29, context->r28);
/*80172D74 0016FB74*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80172D78, 0x80172D78) //this is a jump label
/*80172D78 0016FB78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*80172D7C 0016FB7C*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x5c);
/*80172D80 0016FB80*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80172D84 0016FB84*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80172D88 0016FB88*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80172D8C 0016FB8C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*80172D90 0016FB90*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x2);
/*80172D94 0016FB94*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0xc);
/*80172D98 0016FB98*/ PPC::Runtime::ASM::blt(.L_80172D78);
/*80172D9C 0016FB9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80172DA0 0016FBA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80172DA4 0016FBA4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80172DA8 0016FBA8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80172DAC 0016FBAC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80172DB0 0016FBB0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80172DB4 0016FBB4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80172DB8 0016FBB8*/ PPC::Runtime::ASM::blr();
}