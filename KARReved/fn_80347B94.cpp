//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80347C40.hpp"



void fn_80347B94(PPC::Runtime::GCContext* context)
{
/*80347B94 00344994*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80347B98 00344998*/ PPC::Runtime::ASM::mflr(context->r0);
/*80347B9C 0034499C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E456C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80347BA0 003449A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80347BA4 003449A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80347BA8 003449A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80347BAC 003449AC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80347BB0 003449B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80347BB4 003449B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80347BB8 003449B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80347BBC 003449BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80347BC0 003449C0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80347BC4 003449C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80347BC8 003449C8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80347BCC 003449CC*/ PPC::Runtime::ASM::bne(.L_80347BE0);
/*80347BD0 003449D0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*80347BD4 003449D4*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80347BD8 003449D8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB218 @ Get_MemoryOffset_SDA21);
/*80347BDC 003449DC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80347BE0, 0x80347BE0) //this is a jump label
/*80347BE0 003449E0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4);
/*80347BE4 003449E4*/ PPC::Runtime::ASM::bne(.L_80347BFC);
/*80347BE8 003449E8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E9980 @ Get_MemoryOffset_HighBit);
/*80347BEC 003449EC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB210 @ Get_MemoryOffset_SDA21);
/*80347BF0 003449F0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804E9980 @ Get_MemoryOffset_LowBit);
/*80347BF4 003449F4*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*80347BF8 003449F8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80347BFC, 0x80347BFC) //this is a jump label
/*80347BFC 003449FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80347C00 00344A00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80347C04 00344A04*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80347C08 00344A08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80347C0C 00344A0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80347C10 00344A10*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80347C14 00344A14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80347C18 00344A18*/ PPC::Runtime::ASM::bl(fn_HSD_JObjRemoveAnimAll);
/*80347C1C 00344A1C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80347C20 00344A20*/ PPC::Runtime::ASM::bl(fn_80347C40);
/*80347C24 00344A24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80347C28 00344A28*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80347C2C 00344A2C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80347C30 00344A30*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80347C34 00344A34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80347C38 00344A38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80347C3C 00344A3C*/ PPC::Runtime::ASM::blr();
}