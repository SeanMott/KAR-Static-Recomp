//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_801674E0.hpp"
#include "fn_801674E0.hpp"
#include "fn_80138B10.hpp"
#include "fn_80138A00.hpp"



void fn_801675CC(PPC::Runtime::GCContext* context)
{
/*801675CC 001643CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801675D0 001643D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801675D4 001643D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801675D8 001643D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801675DC 001643DC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801675E0 001643E0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801675E4 001643E4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801675E8 001643E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801675EC 001643EC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801675F0 001643F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r3));
/*801675F4 001643F4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801675F8 001643F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801675FC 001643FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80167600 00164400*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80167604 00164404*/ PPC::Runtime::ASM::lis(context->r4, fn_801674E0 @ Get_MemoryOffset_HighBit);
/*80167608 00164408*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8016760C 0016440C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80167610 00164410*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80167614 00164414*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801674E0 @ Get_MemoryOffset_LowBit);
/*80167618 00164418*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8016761C 0016441C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r31));
/*80167620 00164420*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80167624 00164424*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80167628 00164428*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016762C 0016442C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80167630 00164430*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0A8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80167634 00164434*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80167638 00164438*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016763C 0016443C*/ PPC::Runtime::ASM::li(context->r4, 0x71);
/*80167640 00164440*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80167644 00164444*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80167648 00164448*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8016764C 0016444C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4c, context->r31));
/*80167650 00164450*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80167654 00164454*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80167658 00164458*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016765C 0016445C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80167660 00164460*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80167664 00164464*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80167668 00164468*/ PPC::Runtime::ASM::blr();
}