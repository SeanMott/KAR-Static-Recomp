//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029B1D8(PPC::Runtime::GCContext* context)
{
/*8029B1D8 00297FD8*/ PPC::Runtime::ASM::lis(context->r5, 0x2492);
/*8029B1DC 00297FDC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r3));
/*8029B1E0 00297FE0*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r4);
/*8029B1E4 00297FE4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4925);
/*8029B1E8 00297FE8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8029B1EC 00297FEC*/ PPC::Runtime::ASM::mulhwu(context->r4, context->r5, context->r0);
/*8029B1F0 00297FF0*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*8029B1F4 00297FF4*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 1);
/*8029B1F8 00297FF8*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8029B1FC 00297FFC*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*8029B200 00298000*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r3));
/*8029B204 00298004*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x154, context->r3));
/*8029B208 00298008*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8029B20C 0029800C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x154, context->r3));
/*8029B210 00298010*/ PPC::Runtime::ASM::blr();
}