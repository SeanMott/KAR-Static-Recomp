//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80073FA4.hpp"
#include "fn_LoadDatsForCityTrial.hpp"
#include "fn_80059818.hpp"
#include "fn_801619E4.hpp"
#include "fn_801621F4.hpp"
#include "fn_801629B0.hpp"



void fn_801382D4(PPC::Runtime::GCContext* context)
{
/*801382D4 001350D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801382D8 001350D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801382DC 001350DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*801382E0 001350E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801382E4 001350E4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801382E8 001350E8*/ PPC::Runtime::ASM::stbu(context->r0, lbl_80558788 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*801382EC 001350EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r3));
/*801382F0 001350F0*/ PPC::Runtime::ASM::bl(fn_80073FA4);
/*801382F4 001350F4*/ PPC::Runtime::ASM::bl(fn_LoadDatsForCityTrial);
/*801382F8 001350F8*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1134 @ Get_MemoryOffset_HighBit);
/*801382FC 001350FC*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7D0 @ Get_MemoryOffset_SDA21);
/*80138300 00135100*/ PPC::Runtime::ASM::addi(context->r4, context->r4, MemoryOffset_1134 @ Get_MemoryOffset_LowBit);
/*80138304 00135104*/ PPC::Runtime::ASM::bl(fn_80059818);
/*80138308 00135108*/ PPC::Runtime::ASM::bl(fn_801619E4);
/*8013830C 0013510C*/ PPC::Runtime::ASM::bl(fn_801621F4);
/*80138310 00135110*/ PPC::Runtime::ASM::bl(fn_801629B0);
/*80138314 00135114*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80138318 00135118*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013831C 0013511C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80138320 00135120*/ PPC::Runtime::ASM::blr();
}