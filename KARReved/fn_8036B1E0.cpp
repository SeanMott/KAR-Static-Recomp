//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80324440.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80379398.hpp"
#include "fn_8037B028.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"



void fn_8036B1E0(PPC::Runtime::GCContext* context)
{
/*8036B1E0 00367FE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*8036B1E4 00367FE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8036B1E8 00367FE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8036B1EC 00367FEC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8036B1F0 00367FF0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8036B1F4 00367FF4*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8036B1F8 00367FF8*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8036B1FC 00367FFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8036B200 00368000*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8036B204 00368004*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8036B208 00368008*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8036B20C 0036800C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8036B210 00368010*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8036B214 00368014*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8036B218 00368018*/ PPC::Runtime::ASM::bl(fn_80324440);
/*8036B21C 0036801C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF48C @ Get_MemoryOffset_HighBit);
/*8036B220 00368020*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036B224 00368024*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BF48C @ Get_MemoryOffset_LowBit);
/*8036B228 00368028*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x54);
/*8036B22C 0036802C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*8036B230 00368030*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8036B234 00368034*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*8036B238 00368038*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*8036B23C 0036803C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8036B240 00368040*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036B244 00368044*/ PPC::Runtime::ASM::bctrl();
/*8036B248 00368048*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F0350 @ Get_MemoryOffset_HighBit);
/*8036B24C 0036804C*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x60);
/*8036B250 00368050*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804F0350 @ Get_MemoryOffset_LowBit);
/*8036B254 00368054*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8036B258 00368058*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x28);
/*8036B25C 0036805C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x68);
/*8036B260 00368060*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF4DC @ Get_MemoryOffset_HighBit);
/*8036B264 00368064*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8036B268 00368068*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BF4DC @ Get_MemoryOffset_LowBit);
/*8036B26C 0036806C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036B270 00368070*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8036B274 00368074*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*8036B278 00368078*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r30));
/*8036B27C 0036807C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*8036B280 00368080*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*8036B284 00368084*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8036B288 00368088*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8036B28C 0036808C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036B290 00368090*/ PPC::Runtime::ASM::bctrl();
/*8036B294 00368094*/ PPC::Runtime::ASM::lis(context->r3, FuncPtrList_2 @ Get_MemoryOffset_HighBit);
/*8036B298 00368098*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F51DC @ Get_MemoryOffset_HighBit);
/*8036B29C 0036809C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, FuncPtrList_2 @ Get_MemoryOffset_LowBit);
/*8036B2A0 003680A0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*8036B2A4 003680A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8036B2A8 003680A8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8036B2AC 003680AC*/ PPC::Runtime::ASM::lis(context->r3, Struct_FuncPtrs_Offset_2 @ Get_MemoryOffset_HighBit);
/*8036B2B0 003680B0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804F51DC @ Get_MemoryOffset_LowBit);
/*8036B2B4 003680B4*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8036B2B8 003680B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_FuncPtrs_Offset_2 @ Get_MemoryOffset_LowBit);
/*8036B2BC 003680BC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*8036B2C0 003680C0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B2C4 003680C4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*8036B2C8 003680C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x38);
/*8036B2CC 003680CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B2D0 003680D0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8036B2D4 003680D4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8036B2D8 003680D8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8036B2DC 003680DC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*8036B2E0 003680E0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*8036B2E4 003680E4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*8036B2E8 003680E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*8036B2EC 003680EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8036B2F0 003680F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8036B2F4 003680F4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8036B2F8 003680F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8036B2FC 003680FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*8036B300 00368100*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8036B304 00368104*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8036B308 00368108*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E481C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B30C 0036810C*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*8036B310 00368110*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8036B314 00368114*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B318 00368118*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*8036B31C 0036811C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*8036B320 00368120*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B324 00368124*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4820 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B328 00368128*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f2);
/*8036B32C 0036812C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*8036B330 00368130*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8036B334 00368134*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8036B338 00368138*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8036B33C 0036813C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B340 00368140*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8036B344 00368144*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8036B348 00368148*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B34C 0036814C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8036B350 00368150*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*8036B354 00368154*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B358 00368158*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8036B35C 0036815C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4824 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B360 00368160*/ PPC::Runtime::ASM::subi(context->r8, context->r3, 0x1);
/*8036B364 00368164*/ PPC::Runtime::ASM::li(context->r3, 0x1e);
/*8036B368 00368168*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*8036B36C 0036816C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036B370 00368170*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036B374 00368174*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB7C0 @ Get_MemoryOffset_SDA21);
/*8036B378 00368178*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB7B8 @ Get_MemoryOffset_SDA21);
/*8036B37C 0036817C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8036B380 00368180*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8036B384 00368184*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8036B388 00368188*/ PPC::Runtime::ASM::sth(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8036B38C 0036818C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r29));
/*8036B390 00368190*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r29));
/*8036B394 00368194*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r29));
/*8036B398 00368198*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B39C 0036819C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8036B3A0 003681A0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8036B3A4 003681A4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa8);
/*8036B3A8 003681A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8036B3AC 003681AC*/ PPC::Runtime::ASM::bl(fn_8038CCAC);
/*8036B3B0 003681B0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036B3B4 003681B4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xb8);
/*8036B3B8 003681B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r30));
/*8036B3BC 003681BC*/ PPC::Runtime::ASM::bl(fn_80379398);
/*8036B3C0 003681C0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE238 @ Get_MemoryOffset_HighBit);
/*8036B3C4 003681C4*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0xf4);
/*8036B3C8 003681C8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BE238 @ Get_MemoryOffset_LowBit);
/*8036B3CC 003681CC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036B3D0 003681D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r30));
/*8036B3D4 003681D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8036B3D8 003681D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r30));
/*8036B3DC 003681DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r30));
/*8036B3E0 003681E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8036B3E4 003681E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8036B3E8 003681E8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036B3EC 003681EC*/ PPC::Runtime::ASM::bctrl();
/*8036B3F0 003681F0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE210 @ Get_MemoryOffset_HighBit);
/*8036B3F4 003681F4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8036B3F8 003681F8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE210 @ Get_MemoryOffset_LowBit);
/*8036B3FC 003681FC*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x10c);
/*8036B400 00368200*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8036B404 00368204*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8036B408 00368208*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036B40C 0036820C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8036B410 00368210*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8036B414 00368214*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8036B418 00368218*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r30));
/*8036B41C 0036821C*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10a, context->r30));
/*8036B420 00368220*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r30));
/*8036B424 00368224*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r30));
/*8036B428 00368228*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r30));
/*8036B42C 0036822C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8036B430 00368230*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8036B434 00368234*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036B438 00368238*/ PPC::Runtime::ASM::bctrl();
/*8036B43C 0036823C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8036B440 00368240*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8036B444 00368244*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8036B448 00368248*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8036B44C 0036824C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8036B450 00368250*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8036B454 00368254*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8036B458 00368258*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8036B45C 0036825C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8036B460 00368260*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8036B464 00368264*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B468 00368268*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x30);
/*8036B46C 0036826C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B470 00368270*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036B474 00368274*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8036B478 00368278*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8036B47C 0036827C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4828 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B480 00368280*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*8036B484 00368284*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8036B488 00368288*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E482C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B48C 0036828C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8036B490 00368290*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8036B494 00368294*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*8036B498 00368298*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8036B49C 0036829C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8036B4A0 003682A0*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8036B4A4 003682A4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8036B4A8 003682A8*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8036B4AC 003682AC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8036B4B0 003682B0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8036B4B4 003682B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8036B4B8 003682B8*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*8036B4BC 003682BC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8036B4C0 003682C0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8036B4C4 003682C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8036B4C8 003682C8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x3c);
/*8036B4CC 003682CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8036B4D0 003682D0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8036B4D4 003682D4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8036B4D8 003682D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8036B4DC 003682DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8036B4E0 003682E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8036B4E4 003682E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036B4E8 003682E8*/ PPC::Runtime::ASM::bctrl();
/*8036B4EC 003682EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8036B4F0 003682F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8036B4F4 003682F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8036B4F8 003682F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036B4FC 003682FC*/ PPC::Runtime::ASM::bctrl();
/*8036B500 00368300*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r30));
/*8036B504 00368304*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8036B508 00368308*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x84);
/*8036B50C 0036830C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8036B510 00368310*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036B514 00368314*/ PPC::Runtime::ASM::bctrl();
/*8036B518 00368318*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x84);
/*8036B51C 0036831C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B520 00368320*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r30));
/*8036B524 00368324*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8036B528 00368328*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036B52C 0036832C*/ PPC::Runtime::ASM::bctrl();
/*8036B530 00368330*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036B534 00368334*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r3));
/*8036B538 00368338*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8036B53C 0036833C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa2, context->r30));
/*8036B540 00368340*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036B544 00368344*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a8, context->r3));
/*8036B548 00368348*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B54C 0036834C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8036B550 00368350*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8036B554 00368354*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E481C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B558 00368358*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*8036B55C 0036835C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8036B560 00368360*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B564 00368364*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*8036B568 00368368*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*8036B56C 0036836C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B570 00368370*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8036B574 00368374*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f0);
/*8036B578 00368378*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8036B57C 0036837C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8036B580 00368380*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036B584 00368384*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036B588 00368388*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r30));
/*8036B58C 0036838C*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036B590 00368390*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*8036B594 00368394*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B598 00368398*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8036B59C 0036839C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8036B5A0 003683A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B5A4 003683A4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8036B5A8 003683A8*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8036B5AC 003683AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B5B0 003683B0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8036B5B4 003683B4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*8036B5B8 003683B8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4830 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B5BC 003683BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4834 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B5C0 003683C0*/ PPC::Runtime::ASM::addi(context->r31, context->r1, 0x18);
/*8036B5C4 003683C4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa8);
/*8036B5C8 003683C8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036B5CC 003683CC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*8036B5D0 003683D0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f30, context->f1);
/*8036B5D4 003683D4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036B5D8 003683D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036B5DC 003683DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036B5E0 003683E0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036B5E4 003683E4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r30));
/*8036B5E8 003683E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8036B5EC 003683EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8036B5F0 003683F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8036B5F4 003683F4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 8036B5F8 003683F8  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*8036B5FC 003683FC*/ PPC::Runtime::ASM::bne(.L_8036B610);
/*8036B600 00368400*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB7C8 @ Get_MemoryOffset_SDA21);
/*8036B604 00368404*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*8036B608 00368408*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB7D0 @ Get_MemoryOffset_SDA21);
/*8036B60C 0036840C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036B610, 0x8036B610) //this is a jump label
/*8036B610 00368410*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8036B614 00368414*/ PPC::Runtime::ASM::bne(.L_8036B628);
/*8036B618 00368418*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB7C8 @ Get_MemoryOffset_SDA21);
/*8036B61C 0036841C*/ PPC::Runtime::ASM::li(context->r4, 0x317);
/*8036B620 00368420*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB7D8 @ Get_MemoryOffset_SDA21);
/*8036B624 00368424*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036B628, 0x8036B628) //this is a jump label
/*8036B628 00368428*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8036B62C 0036842C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8036B630 00368430*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8036B634 00368434*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8036B638 00368438*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8036B63C 0036843C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8036B640 00368440*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8036B644 00368444*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8036B648 00368448*/ PPC::Runtime::ASM::bne(.L_8036B694);
/*8036B64C 0036844C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8036B650 00368450*/ PPC::Runtime::ASM::beq(.L_8036B694);
/*8036B654 00368454*/ PPC::Runtime::ASM::bne(.L_8036B668);
/*8036B658 00368458*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB7C8 @ Get_MemoryOffset_SDA21);
/*8036B65C 0036845C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8036B660 00368460*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB7D0 @ Get_MemoryOffset_SDA21);
/*8036B664 00368464*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036B668, 0x8036B668) //this is a jump label
/*8036B668 00368468*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8036B66C 0036846C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8036B670 00368470*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8036B674 00368474*/ PPC::Runtime::ASM::bne(.L_8036B684);
/*8036B678 00368478*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8036B67C 0036847C*/ PPC::Runtime::ASM::beq(.L_8036B684);
/*8036B680 00368480*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8036B684, 0x8036B684) //this is a jump label
/* 8036B684 00368484  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8036B688 00368488*/ PPC::Runtime::ASM::bne(.L_8036B694);
/*8036B68C 0036848C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8036B690 00368490*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8036B694, 0x8036B694) //this is a jump label
/*8036B694 00368494*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa8);
/*8036B698 00368498*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036B69C 0036849C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8036B6A0 003684A0*/ PPC::Runtime::ASM::bl(fn_8038D158);
/*8036B6A4 003684A4*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_HighBit);
/*8036B6A8 003684A8*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*8036B6AC 003684AC*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetRate @ Get_MemoryOffset_LowBit);
/*8036B6B0 003684B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r30));
/*8036B6B4 003684B4*/ PPC::Runtime::ASM::subi(context->r5, context->r4, 0x1);
/*8036B6B8 003684B8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4838 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036B6BC 003684BC*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8036B6C0 003684C0*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/* 8036B6C4 003684C4  4C C6 32 42 */ crset context->cr1eq
/*8036B6C8 003684C8*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*8036B6CC 003684CC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa8);
/*8036B6D0 003684D0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r30));
/*8036B6D4 003684D4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8036B6D8 003684D8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036B6DC 003684DC*/ PPC::Runtime::ASM::bctrl();
/*8036B6E0 003684E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8036B6E4 003684E4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8036B6E8 003684E8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8036B6EC 003684EC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8036B6F0 003684F0*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8036B6F4 003684F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8036B6F8 003684F8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8036B6FC 003684FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8036B700 00368500*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8036B704 00368504*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8036B708 00368508*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8036B70C 0036850C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*8036B710 00368510*/ PPC::Runtime::ASM::blr();
}