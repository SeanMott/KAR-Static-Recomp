//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007A70C.hpp"



void fn_8007A66C(PPC::Runtime::GCContext* context)
{
/*8007A66C 0007746C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8007A670 00077470*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007A674 00077474*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8007A678 00077478*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007A67C 0007747C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007A680 00077480*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8007A684 00077484*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007A688 00077488*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8007A68C 0007748C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x4);
/*8007A690 00077490*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*8007A694 00077494*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x24);
/*8007A698 00077498*/ PPC::Runtime::ASM::bl(fn_803D22F4);
/*8007A69C 0007749C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8007A6A0 000774A0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f3);
/*8007A6A4 000774A4*/ PPC::Runtime::ASM::bge(.L_8007A6F0);
/*8007A6A8 000774A8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8007A6AC 000774AC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007A6B0 000774B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DED7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007A6B4 000774B4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8007A6B8 000774B8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f3);
/*8007A6BC 000774BC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8007A6C0 000774C0*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x24);
/*8007A6C4 000774C4*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f2);
/*8007A6C8 000774C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f0);
/*8007A6CC 000774CC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8007A6D0 000774D0*/ PPC::Runtime::ASM::bne(.L_8007A6DC);
/*8007A6D4 000774D4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007A6D8 000774D8*/ PPC::Runtime::ASM::b(.L_8007A6EC);
RUNTIME_PPC_JUMP_LABEL(.L_8007A6DC, 0x8007A6DC) //this is a jump label
/*8007A6DC 000774DC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f2);
/*8007A6E0 000774E0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DED78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007A6E4 000774E4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f4, context->f0);
/*8007A6E8 000774E8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8007A6EC, 0x8007A6EC) //this is a jump label
/*8007A6EC 000774EC*/ PPC::Runtime::ASM::bl(fn_8007A70C);
RUNTIME_PPC_JUMP_LABEL(.L_8007A6F0, 0x8007A6F0) //this is a jump label
/*8007A6F0 000774F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8007A6F4 000774F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007A6F8 000774F8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007A6FC 000774FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007A700 00077500*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007A704 00077504*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8007A708 00077508*/ PPC::Runtime::ASM::blr();
}