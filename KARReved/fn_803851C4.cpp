//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803851C4(PPC::Runtime::GCContext* context)
{
/*803851C4 00381FC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803851C8 00381FC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803851CC 00381FCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803851D0 00381FD0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803851D4 00381FD4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803851D8 00381FD8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803851DC 00381FDC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4);
/*803851E0 00381FE0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803851E4 00381FE4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803851E8 00381FE8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803851EC 00381FEC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803851F0 00381FF0*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*803851F4 00381FF4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*803851F8 00381FF8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803851FC 00381FFC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80385200 00382000*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*80385204 00382004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80385208 00382008*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8038520C 0038200C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80385210 00382010*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80385214 00382014*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80385218 00382018*/ PPC::Runtime::ASM::blr();
}