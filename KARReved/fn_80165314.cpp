//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_8016520C.hpp"
#include "fn_8016520C.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_80138C90.hpp"
#include "fn_80138C1C.hpp"
#include "fn_80164D88.hpp"



void fn_80165314(PPC::Runtime::GCContext* context)
{
/*80165314 00162114*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80165318 00162118*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016531C 0016211C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80165320 00162120*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80165324 00162124*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80165328 00162128*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8016532C 0016212C*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80165330 00162130*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80165334 00162134*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80165338 00162138*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8016533C 0016213C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c8, context->r3));
/*80165340 00162140*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80165344 00162144*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80165348 00162148*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016534C 0016214C*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80165350 00162150*/ PPC::Runtime::ASM::lis(context->r4, fn_8016520C @ Get_MemoryOffset_HighBit);
/*80165354 00162154*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80165358 00162158*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8016535C 0016215C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80165360 00162160*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8016520C @ Get_MemoryOffset_LowBit);
/*80165364 00162164*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80165368 00162168*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016536C 0016216C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80165370 00162170*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c8, context->r31));
/*80165374 00162174*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80165378 00162178*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8016537C 0016217C*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80165380 00162180*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80165384 00162184*/ PPC::Runtime::ASM::li(context->r4, 0x69);
/*80165388 00162188*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8016538C 0016218C*/ PPC::Runtime::ASM::stb(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80165390 00162190*/ PPC::Runtime::ASM::extsb(context->r4, context->r28);
/*80165394 00162194*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80165398 00162198*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*8016539C 0016219C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801653A0 001621A0*/ PPC::Runtime::ASM::bl(fn_80138C90);
/*801653A4 001621A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801653A8 001621A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801653AC 001621AC*/ PPC::Runtime::ASM::extsb(context->r4, context->r27);
/*801653B0 001621B0*/ PPC::Runtime::ASM::bl(fn_80138C1C);
/*801653B4 001621B4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801653B8 001621B8*/ PPC::Runtime::ASM::bl(fn_80164D88);
/*801653BC 001621BC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801653C0 001621C0*/ PPC::Runtime::ASM::bne(.L_801653D4);
/*801653C4 001621C4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6A90 @ Get_MemoryOffset_SDA21);
/*801653C8 001621C8*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*801653CC 001621CC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6A98 @ Get_MemoryOffset_SDA21);
/*801653D0 001621D0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801653D4, 0x801653D4) //this is a jump label
/*801653D4 001621D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801653D8 001621D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801653DC 001621DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*801653E0 001621E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*801653E4 001621E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801653E8 001621E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*801653EC 001621EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801653F0 001621F0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801653F4 001621F4*/ PPC::Runtime::ASM::bne(.L_80165440);
/*801653F8 001621F8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801653FC 001621FC*/ PPC::Runtime::ASM::beq(.L_80165440);
/*80165400 00162200*/ PPC::Runtime::ASM::bne(.L_80165414);
/*80165404 00162204*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6A90 @ Get_MemoryOffset_SDA21);
/*80165408 00162208*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8016540C 0016220C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6A98 @ Get_MemoryOffset_SDA21);
/*80165410 00162210*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80165414, 0x80165414) //this is a jump label
/*80165414 00162214*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*80165418 00162218*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8016541C 0016221C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80165420 00162220*/ PPC::Runtime::ASM::bne(.L_80165430);
/*80165424 00162224*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80165428 00162228*/ PPC::Runtime::ASM::beq(.L_80165430);
/*8016542C 0016222C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80165430, 0x80165430) //this is a jump label
/*80165430 00162230*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80165434 00162234*/ PPC::Runtime::ASM::bne(.L_80165440);
/*80165438 00162238*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8016543C 0016223C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80165440, 0x80165440) //this is a jump label
/*80165440 00162240*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9cc, context->r31));
/*80165444 00162244*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80165448 00162248*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8016544C 0016224C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80165450 00162250*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80165454 00162254*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80165458 00162258*/ PPC::Runtime::ASM::blr();
}