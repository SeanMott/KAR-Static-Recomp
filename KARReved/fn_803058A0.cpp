//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034D1F8.hpp"
#include "fn_802E498C.hpp"



void fn_803058A0(PPC::Runtime::GCContext* context)
{
/*803058A0 003026A0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803058A4 003026A4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803058A8 003026A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803058AC 003026AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803058B0 003026B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803058B4 003026B4*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803058B8 003026B8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803058BC 003026BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803058C0 003026C0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xbc);
/*803058C4 003026C4*/ PPC::Runtime::ASM::bl(fn_802E498C);
/*803058C8 003026C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803058CC 003026CC*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*803058D0 003026D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803058D4 003026D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*803058D8 003026D8*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E3BD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803058DC 003026DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803058E0 003026E0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803058E4 003026E4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*803058E8 003026E8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*803058EC 003026EC*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*803058F0 003026F0*/ PPC::Runtime::ASM::mfcr(context->r0);
/*803058F4 003026F4*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 2);
/*803058F8 003026F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803058FC 003026FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80305900 00302700*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80305904 00302704*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80305908 00302708*/ PPC::Runtime::ASM::blr();
}