//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800CE6D8.hpp"
#include "fn_grLoadCommon.hpp"
#include "fn_800F2528.hpp"
#include "fn_800EB300.hpp"
#include "fn_800DE0C8.hpp"
#include "fn_800F43FC.hpp"



void fn_800CE1D4(PPC::Runtime::GCContext* context)
{
/*800CE1D4 000CAFD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800CE1D8 000CAFD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CE1DC 000CAFDC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80557558 @ Get_MemoryOffset_HighBit);
/*800CE1E0 000CAFE0*/ PPC::Runtime::ASM::li(context->r4, 0x870);
/*800CE1E4 000CAFE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CE1E8 000CAFE8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800CE1EC 000CAFEC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800CE1F0 000CAFF0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800CE1F4 000CAFF4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80557558 @ Get_MemoryOffset_LowBit);
/*800CE1F8 000CAFF8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800CE1FC 000CAFFC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CE200 000CB000*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*800CE204 000CB004*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*800CE208 000CB008*/ PPC::Runtime::ASM::li(context->r4, 0x190);
/*800CE20C 000CB00C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800CE210 000CB010*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*800CE214 000CB014*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x58);
/*800CE218 000CB018*/ PPC::Runtime::ASM::li(context->r4, 0x4c);
/*800CE21C 000CB01C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800CE220 000CB020*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*800CE224 000CB024*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x84);
/*800CE228 000CB028*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*800CE22C 000CB02C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800CE230 000CB030*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*800CE234 000CB034*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xb0);
/*800CE238 000CB038*/ PPC::Runtime::ASM::li(context->r4, 0x40);
/*800CE23C 000CB03C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800CE240 000CB040*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*800CE244 000CB044*/ PPC::Runtime::ASM::bl(fn_800CE6D8);
/*800CE248 000CB048*/ PPC::Runtime::ASM::bl(fn_grLoadCommon);
/*800CE24C 000CB04C*/ PPC::Runtime::ASM::bl(fn_800F2528);
/*800CE250 000CB050*/ PPC::Runtime::ASM::bl(fn_800EB300);
/*800CE254 000CB054*/ PPC::Runtime::ASM::bl(fn_800DE0C8);
/*800CE258 000CB058*/ PPC::Runtime::ASM::bl(fn_800F43FC);
/*800CE25C 000CB05C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CE260 000CB060*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800CE264 000CB064*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CE268 000CB068*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800CE26C 000CB06C*/ PPC::Runtime::ASM::blr();
}