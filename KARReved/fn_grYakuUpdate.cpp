//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800FA2A0.hpp"
#include "fn_800FA610.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_800FE5D4.hpp"
#include "fn_80109DB4.hpp"
#include "fn_80109DB4.hpp"
#include "fn_8010D228.hpp"
#include "fn_whispyLogic.hpp"
#include "fn_80106824.hpp"
#include "fn_80106824.hpp"
#include "fn_80108F10.hpp"
#include "fn_80108CE8.hpp"
#include "fn_80109138.hpp"
#include "fn_80107BFC.hpp"
#include "fn_80107D64.hpp"
#include "fn_80107ECC.hpp"
#include "fn_801043C8.hpp"



void fn_grYakuUpdate(PPC::Runtime::GCContext* context)
{
/*8010F268 0010C068*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010F26C 0010C06C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010F270 0010C070*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010F274 0010C074*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F278 0010C078*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010F27C 0010C07C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8010F280 0010C080*/ PPC::Runtime::ASM::bl(fn_800FA2A0);
/*8010F284 0010C084*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F288 0010C088*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8010F28C 0010C08C*/ PPC::Runtime::ASM::bl(fn_800FA610);
/*8010F290 0010C090*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F294 0010C094*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8010F298 0010C098*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F29C 0010C09C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F2A0 0010C0A0*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8010F2A4 0010C0A4*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F2A8 0010C0A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F2AC 0010C0AC*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8010F2B0 0010C0B0*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F2B4 0010C0B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F2B8 0010C0B8*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8010F2BC 0010C0BC*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F2C0 0010C0C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F2C4 0010C0C4*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8010F2C8 0010C0C8*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F2CC 0010C0CC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F2D0 0010C0D0*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8010F2D4 0010C0D4*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F2D8 0010C0D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F2DC 0010C0DC*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8010F2E0 0010C0E0*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F2E4 0010C0E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F2E8 0010C0E8*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8010F2EC 0010C0EC*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F2F0 0010C0F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F2F4 0010C0F4*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8010F2F8 0010C0F8*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F2FC 0010C0FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F300 0010C100*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8010F304 0010C104*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F308 0010C108*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F30C 0010C10C*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*8010F310 0010C110*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F314 0010C114*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F318 0010C118*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8010F31C 0010C11C*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F320 0010C120*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F324 0010C124*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*8010F328 0010C128*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F32C 0010C12C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F330 0010C130*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*8010F334 0010C134*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F338 0010C138*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F33C 0010C13C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8010F340 0010C140*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F344 0010C144*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F348 0010C148*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*8010F34C 0010C14C*/ PPC::Runtime::ASM::bl(fn_800FE5D4);
/*8010F350 0010C150*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F354 0010C154*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*8010F358 0010C158*/ PPC::Runtime::ASM::bl(fn_80109DB4);
/*8010F35C 0010C15C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F360 0010C160*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*8010F364 0010C164*/ PPC::Runtime::ASM::bl(fn_80109DB4);
/*8010F368 0010C168*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F36C 0010C16C*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*8010F370 0010C170*/ PPC::Runtime::ASM::bl(fn_8010D228);
/*8010F374 0010C174*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F378 0010C178*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*8010F37C 0010C17C*/ PPC::Runtime::ASM::bl(fn_whispyLogic);
/*8010F380 0010C180*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F384 0010C184*/ PPC::Runtime::ASM::li(context->r4, 0x16);
/*8010F388 0010C188*/ PPC::Runtime::ASM::bl(fn_80106824);
/*8010F38C 0010C18C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F390 0010C190*/ PPC::Runtime::ASM::li(context->r4, 0x17);
/*8010F394 0010C194*/ PPC::Runtime::ASM::bl(fn_80106824);
/*8010F398 0010C198*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F39C 0010C19C*/ PPC::Runtime::ASM::li(context->r4, 0x18);
/*8010F3A0 0010C1A0*/ PPC::Runtime::ASM::bl(fn_80108F10);
/*8010F3A4 0010C1A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F3A8 0010C1A8*/ PPC::Runtime::ASM::li(context->r4, 0x19);
/*8010F3AC 0010C1AC*/ PPC::Runtime::ASM::bl(fn_80108CE8);
/*8010F3B0 0010C1B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F3B4 0010C1B4*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*8010F3B8 0010C1B8*/ PPC::Runtime::ASM::bl(fn_80109138);
/*8010F3BC 0010C1BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F3C0 0010C1C0*/ PPC::Runtime::ASM::li(context->r4, 0x1b);
/*8010F3C4 0010C1C4*/ PPC::Runtime::ASM::bl(fn_80107BFC);
/*8010F3C8 0010C1C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F3CC 0010C1CC*/ PPC::Runtime::ASM::li(context->r4, 0x1c);
/*8010F3D0 0010C1D0*/ PPC::Runtime::ASM::bl(fn_80107D64);
/*8010F3D4 0010C1D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F3D8 0010C1D8*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*8010F3DC 0010C1DC*/ PPC::Runtime::ASM::bl(fn_80107ECC);
/*8010F3E0 0010C1E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010F3E4 0010C1E4*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*8010F3E8 0010C1E8*/ PPC::Runtime::ASM::bl(fn_801043C8);
/*8010F3EC 0010C1EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010F3F0 0010C1F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010F3F4 0010C1F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010F3F8 0010C1F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010F3FC 0010C1FC*/ PPC::Runtime::ASM::blr();
}