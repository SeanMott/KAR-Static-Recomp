//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8021F7DC.hpp"



void fn_80226960(PPC::Runtime::GCContext* context)
{
/*80226960 00223760*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80226964 00223764*/ PPC::Runtime::ASM::mflr(context->r0);
/*80226968 00223768*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8022696C 0022376C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80226970 00223770*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80226974 00223774*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80226978 00223778*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8022697C 0022377C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2994 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80226980 00223780*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80226984 00223784*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80226988 00223788*/ PPC::Runtime::ASM::bl(fn_8021F7DC);
/*8022698C 0022378C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80226990 00223790*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*80226994 00223794*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80226998 00223798*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r31));
/*8022699C 0022379C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f5);
/*802269A0 002237A0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*802269A4 002237A4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r31));
/*802269A8 002237A8*/ PPC::Runtime::ASM::fmuls(context->f4, context->f4, context->f5);
/*802269AC 002237AC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2990 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802269B0 002237B0*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*802269B4 002237B4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f3, context->f5);
/*802269B8 002237B8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*802269BC 002237BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*802269C0 002237C0*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f4);
/*802269C4 002237C4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*802269C8 002237C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*802269CC 002237CC*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f2);
/*802269D0 002237D0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*802269D4 002237D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*802269D8 002237D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*802269DC 002237DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*802269E0 002237E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802269E4 002237E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802269E8 002237E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802269EC 002237EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802269F0 002237F0*/ PPC::Runtime::ASM::blr();
}