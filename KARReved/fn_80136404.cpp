//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800721D4.hpp"
#include "fn_80072458.hpp"



void fn_80136404(PPC::Runtime::GCContext* context)
{
/*80136404 00133204*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80136408 00133208*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013640C 0013320C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80136410 00133210*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80136414 00133214*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80136418 00133218*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8013641C 0013321C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*80136420 00133220*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80136424 00133224*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80136428 00133228*/ PPC::Runtime::ASM::beq(.L_80136480);
/*8013642C 0013322C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80136430 00133230*/ PPC::Runtime::ASM::li(context->r0, 0x16);
/*80136434 00133234*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E0160 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80136438 00133238*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8013643C 0013323C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0178 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80136440 00133240*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E017C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80136444 00133244*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0180 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80136448 00133248*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013644C 0013324C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136450 00133250*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80136454 00133254*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80136458 00133258*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013645C 0013325C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80136460 00133260*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80136464 00133264*/ PPC::Runtime::ASM::bl(fn_800721D4);
/* 80136468 00133268  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8013646C 0013326C*/ PPC::Runtime::ASM::beq(.L_8013647C);
/*80136470 00133270*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80136474 00133274*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80136478 00133278*/ PPC::Runtime::ASM::bl(fn_80072458);
RUNTIME_PPC_JUMP_LABEL(.L_8013647C, 0x8013647C) //this is a jump label
/*8013647C 0013327C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80136480, 0x80136480) //this is a jump label
/*80136480 00133280*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80136484 00133284*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80136488 00133288*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8013648C 0013328C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136490 00133290*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80136494 00133294*/ PPC::Runtime::ASM::blr();
}