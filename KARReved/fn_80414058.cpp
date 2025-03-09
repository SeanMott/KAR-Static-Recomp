//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_HSD_PadRumbleRemoveAll.hpp"
#include "fn_HSD_PadRumbleFree.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_PADRecalibrate.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80414058(PPC::Runtime::GCContext* context)
{
/*80414058 00410E58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8041405C 00410E5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80414060 00410E60*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*80414064 00410E64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80414068 00410E68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8041406C 00410E6C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80414070 00410E70*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*80414074 00410E74*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80414078 00410E78*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8041407C 00410E7C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80414080 00410E80*/ PPC::Runtime::ASM::bl(fn_HSD_PadRumbleRemoveAll);
/*80414084 00410E84*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80414088, 0x80414088) //this is a jump label
/*80414088 00410E88*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r31, 24);
/*8041408C 00410E8C*/ PPC::Runtime::ASM::bl(fn_HSD_PadRumbleFree);
/*80414090 00410E90*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80414094 00410E94*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*80414098 00410E98*/ PPC::Runtime::ASM::blt(.L_80414088);
/*8041409C 00410E9C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*804140A0 00410EA0*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*804140A4 00410EA4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804140A8 00410EA8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*804140AC 00410EAC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*804140B0 00410EB0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r5));
/*804140B4 00410EB4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*804140B8 00410EB8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804140BC 00410EBC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*804140C0 00410EC0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*804140C4 00410EC4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*804140C8 00410EC8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r31));
/*804140CC 00410ECC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804140D0 00410ED0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r31));
/*804140D4 00410ED4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*804140D8 00410ED8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804140DC 00410EDC*/ PPC::Runtime::ASM::lis(context->r3, 0xf000);
/*804140E0 00410EE0*/ PPC::Runtime::ASM::bl(fn_PADRecalibrate);
/*804140E4 00410EE4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*804140E8 00410EE8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*804140EC 00410EEC*/ PPC::Runtime::ASM::addi(context->r6, context->r3, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*804140F0 00410EF0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*804140F4 00410EF4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*804140F8 00410EF8*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*804140FC 00410EFC*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r6));
/*80414100 00410F00*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80414104 00410F04*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r6));
/*80414108 00410F08*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r6));
/*8041410C 00410F0C*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*80414110 00410F10*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r6));
/*80414114 00410F14*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r6));
/*80414118 00410F18*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17, context->r6));
/*8041411C 00410F1C*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*80414120 00410F20*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r6));
/*80414124 00410F24*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5b, context->r30));
/*80414128 00410F28*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8041412C 00410F2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80414130 00410F30*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80414134 00410F34*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80414138 00410F38*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041413C 00410F3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80414140 00410F40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80414144 00410F44*/ PPC::Runtime::ASM::blr();
}