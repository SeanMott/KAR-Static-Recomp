//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80067734.hpp"
#include "fn_800BAE98.hpp"



void fn_800E5FA4(PPC::Runtime::GCContext* context)
{
/*800E5FA4 000E2DA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800E5FA8 000E2DA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E5FAC 000E2DAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E5FB0 000E2DB0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E5FB4 000E2DB4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*800E5FB8 000E2DB8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800E5FBC 000E2DBC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800E5FC0 000E2DC0*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetProjectionType);
/*800E5FC4 000E2DC4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800E5FC8 000E2DC8*/ PPC::Runtime::ASM::bne(.L_800E5FFC);
/*800E5FCC 000E2DCC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800E5FD0 000E2DD0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800E5FD4 000E2DD4*/ PPC::Runtime::ASM::bl(fn_80067734);
/*800E5FD8 000E2DD8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800E5FDC 000E2DDC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x88);
/*800E5FE0 000E2DE0*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyeVector?);
/*800E5FE4 000E2DE4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800E5FE8 000E2DE8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x7c);
/*800E5FEC 000E2DEC*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyePosition);
/*800E5FF0 000E2DF0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800E5FF4 000E2DF4*/ PPC::Runtime::ASM::bl(fn_800BAE98);
/*800E5FF8 000E2DF8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800E5FFC, 0x800E5FFC) //this is a jump label
/*800E5FFC 000E2DFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E6000 000E2E00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800E6004 000E2E04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800E6008 000E2E08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E600C 000E2E0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800E6010 000E2E10*/ PPC::Runtime::ASM::blr();
}