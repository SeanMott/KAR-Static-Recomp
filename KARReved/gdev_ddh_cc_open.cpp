//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void gdev_ddh_cc_open(PPC::Runtime::GCContext* context)
{
/*803C31C0 003BFFC0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDD10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C31C4 003BFFC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C31C8 003BFFC8*/ PPC::Runtime::ASM::beq(.L_803C31D4);
/*803C31CC 003BFFCC*/ PPC::Runtime::ASM::li(context->r3, -0x2715);
/*803C31D0 003BFFD0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803C31D4, 0x803C31D4) //this is a jump label
/*803C31D4 003BFFD4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C31D8 003BFFD8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C31DC 003BFFDC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDD10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C31E0 003BFFE0*/ PPC::Runtime::ASM::blr();
}