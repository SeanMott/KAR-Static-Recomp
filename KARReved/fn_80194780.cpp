//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80055DA0.hpp"
#include "fn_800551A8.hpp"
#include "fn_800550F4.hpp"



void fn_80194780(PPC::Runtime::GCContext* context)
{
/*80194780 00191580*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80194784 00191584*/ PPC::Runtime::ASM::mflr(context->r0);
/*80194788 00191588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019478C 0019158C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80194790 00191590*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80194794 00191594*/ PPC::Runtime::ASM::bl(fn_80055DA0);
/*80194798 00191598*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8019479C 0019159C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801947A0 001915A0*/ PPC::Runtime::ASM::bl(fn_800551A8);
/*801947A4 001915A4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801947A8 001915A8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801947AC 001915AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801947B0 001915B0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801947B4 001915B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*801947B8 001915B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801947BC 001915BC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnim);
/*801947C0 001915C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801947C4 001915C4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E10B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801947C8 001915C8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801947CC 001915CC*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801947D0 001915D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801947D4 001915D4*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*801947D8 001915D8*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*801947DC 001915DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801947E0 001915E0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E10B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801947E4 001915E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801947E8 001915E8*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*801947EC 001915EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801947F0 001915F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801947F4 001915F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801947F8 001915F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801947FC 001915FC*/ PPC::Runtime::ASM::blr();
}