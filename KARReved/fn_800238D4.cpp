//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80133EE8.hpp"
#include "fn_80134520.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80133E48.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80134008.hpp"
#include "fn_80134088.hpp"
#include "fn_80134008.hpp"
#include "fn_80134088.hpp"
#include "fn_80134048.hpp"
#include "fn_80134088.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_80134008.hpp"
#include "fn_80134088.hpp"
#include "fn_80134048.hpp"
#include "fn_80134088.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_?loadData2.hpp"
#include "fn_80133FA8.hpp"
#include "fn_80133FE8.hpp"
#include "fn_801345C0.hpp"
#include "fn_801344A0.hpp"



void fn_800238D4(PPC::Runtime::GCContext* context)
{
/*800238D4 000206D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800238D8 000206D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800238DC 000206DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800238E0 000206E0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800238E4 000206E4*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*800238E8 000206E8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800238EC 000206EC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x10a);
/*800238F0 000206F0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800238F4 000206F4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800238F8 000206F8*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x10a);
/*800238FC 000206FC*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*80023900 00020700*/ PPC::Runtime::ASM::b(.L_80023924);
RUNTIME_PPC_JUMP_LABEL(.L_80023904, 0x80023904) //this is a jump label
/*80023904 00020704*/ PPC::Runtime::ASM::extsb(context->r3, context->r5);
/*80023908 00020708*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x45);
/*8002390C 0002070C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r6, context->r0);
/*80023910 00020710*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80023914 00020714*/ PPC::Runtime::ASM::bne(.L_80023920);
/*80023918 00020718*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8002391C 0002071C*/ PPC::Runtime::ASM::extsb(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80023920, 0x80023920) //this is a jump label
/*80023920 00020720*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80023924, 0x80023924) //this is a jump label
/*80023924 00020724*/ PPC::Runtime::ASM::extsb(context->r0, context->r5);
/*80023928 00020728*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8002392C 0002072C*/ PPC::Runtime::ASM::blt(.L_80023904);
/*80023930 00020730*/ PPC::Runtime::ASM::extsb.(context->r0, context->r4);
/*80023934 00020734*/ PPC::Runtime::ASM::bne(.L_80023B50);
/*80023938 00020738*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8002393C, 0x8002393C) //this is a jump label
/*8002393C 0002073C*/ PPC::Runtime::ASM::add(context->r30, context->r31, context->r29);
/*80023940 00020740*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r30));
/*80023944 00020744*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80023948 00020748*/ PPC::Runtime::ASM::bne(.L_80023B3C);
/*8002394C 0002074C*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80023950 00020750*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r30));
/*80023954 00020754*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80023958 00020758*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x10a);
/*8002395C 0002075C*/ PPC::Runtime::ASM::extsb(context->r28, context->r29);
/*80023960 00020760*/ PPC::Runtime::ASM::add(context->r25, context->r26, context->r28);
/*80023964 00020764*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r25));
/*80023968 00020768*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8002396C 0002076C*/ PPC::Runtime::ASM::beq(.L_80023B0C);
/*80023970 00020770*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80023974 00020774*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*80023978 00020778*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_8002397C, 0x8002397C) //this is a jump label
/*8002397C 0002077C*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x25);
/*80023980 00020780*/ PPC::Runtime::ASM::lbzx(context->r0, context->r26, context->r0);
/*80023984 00020784*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80023988 00020788*/ PPC::Runtime::ASM::cmpw(context->r0, context->r28);
/*8002398C 0002078C*/ PPC::Runtime::ASM::bne(.L_800239AC);
/*80023990 00020790*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*80023994 00020794*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80023998 00020798*/ PPC::Runtime::ASM::bl(fn_80133EE8);
/*8002399C 0002079C*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*800239A0 000207A0*/ PPC::Runtime::ASM::extsb(context->r4, context->r29);
/*800239A4 000207A4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800239A8 000207A8*/ PPC::Runtime::ASM::bl(fn_80134520);
RUNTIME_PPC_JUMP_LABEL(.L_800239AC, 0x800239AC) //this is a jump label
/*800239AC 000207AC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*800239B0 000207B0*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*800239B4 000207B4*/ PPC::Runtime::ASM::blt(.L_8002397C);
/*800239B8 000207B8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r25));
/*800239BC 000207BC*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*800239C0 000207C0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800239C4 000207C4*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*800239C8 000207C8*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*800239CC 000207CC*/ PPC::Runtime::ASM::bl(fn_80133E48);
/*800239D0 000207D0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800239D4 000207D4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r28);
/*800239D8 000207D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x157, context->r3));
/*800239DC 000207DC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15f, context->r3));
/*800239E0 000207E0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800239E4 000207E4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x163, context->r3));
/*800239E8 000207E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800239EC 000207EC*/ PPC::Runtime::ASM::bge(.L_80023A00);
/*800239F0 000207F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800239F4 000207F4*/ PPC::Runtime::ASM::beq(.L_80023A0C);
/*800239F8 000207F8*/ PPC::Runtime::ASM::bge(.L_80023A28);
/*800239FC 000207FC*/ PPC::Runtime::ASM::b(.L_80023A60);
RUNTIME_PPC_JUMP_LABEL(.L_80023A00, 0x80023A00) //this is a jump label
/*80023A00 00020800*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*80023A04 00020804*/ PPC::Runtime::ASM::bge(.L_80023A60);
/*80023A08 00020808*/ PPC::Runtime::ASM::b(.L_80023A48);
RUNTIME_PPC_JUMP_LABEL(.L_80023A0C, 0x80023A0C) //this is a jump label
/*80023A0C 0002080C*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023A10 00020810*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80023A14 00020814*/ PPC::Runtime::ASM::bl(fn_80134008);
/*80023A18 00020818*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023A1C 0002081C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80023A20 00020820*/ PPC::Runtime::ASM::bl(fn_80134088);
/*80023A24 00020824*/ PPC::Runtime::ASM::b(.L_80023A60);
RUNTIME_PPC_JUMP_LABEL(.L_80023A28, 0x80023A28) //this is a jump label
/*80023A28 00020828*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80023A2C 0002082C*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023A30 00020830*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80023A34 00020834*/ PPC::Runtime::ASM::bl(fn_80134008);
/*80023A38 00020838*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023A3C 0002083C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80023A40 00020840*/ PPC::Runtime::ASM::bl(fn_80134088);
/*80023A44 00020844*/ PPC::Runtime::ASM::b(.L_80023A60);
RUNTIME_PPC_JUMP_LABEL(.L_80023A48, 0x80023A48) //this is a jump label
/*80023A48 00020848*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023A4C 0002084C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80023A50 00020850*/ PPC::Runtime::ASM::bl(fn_80134048);
/*80023A54 00020854*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023A58 00020858*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80023A5C 0002085C*/ PPC::Runtime::ASM::bl(fn_80134088);
RUNTIME_PPC_JUMP_LABEL(.L_80023A60, 0x80023A60) //this is a jump label
/*80023A60 00020860*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80023A64 00020864*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r28);
/*80023A68 00020868*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x157, context->r3));
/*80023A6C 0002086C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x167, context->r3));
/*80023A70 00020870*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80023A74 00020874*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80023A78 00020878*/ PPC::Runtime::ASM::beq(.L_80023A84);
/*80023A7C 0002087C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80023A80 00020880*/ PPC::Runtime::ASM::bne(.L_80023AA0);
RUNTIME_PPC_JUMP_LABEL(.L_80023A84, 0x80023A84) //this is a jump label
/*80023A84 00020884*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023A88 00020888*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80023A8C 0002088C*/ PPC::Runtime::ASM::bl(fn_80134008);
/*80023A90 00020890*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023A94 00020894*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80023A98 00020898*/ PPC::Runtime::ASM::bl(fn_80134088);
/*80023A9C 0002089C*/ PPC::Runtime::ASM::b(.L_80023AB8);
RUNTIME_PPC_JUMP_LABEL(.L_80023AA0, 0x80023AA0) //this is a jump label
/*80023AA0 000208A0*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023AA4 000208A4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80023AA8 000208A8*/ PPC::Runtime::ASM::bl(fn_80134048);
/*80023AAC 000208AC*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023AB0 000208B0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80023AB4 000208B4*/ PPC::Runtime::ASM::bl(fn_80134088);
RUNTIME_PPC_JUMP_LABEL(.L_80023AB8, 0x80023AB8) //this is a jump label
/*80023AB8 000208B8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80023ABC 000208BC*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x10a);
/*80023AC0 000208C0*/ PPC::Runtime::ASM::add(context->r25, context->r26, context->r28);
/*80023AC4 000208C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r25));
/*80023AC8 000208C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80023ACC 000208CC*/ PPC::Runtime::ASM::ble(.L_80023ADC);
/*80023AD0 000208D0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80023AD4 000208D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80023AD8 000208D8*/ PPC::Runtime::ASM::bne(.L_80023B04);
RUNTIME_PPC_JUMP_LABEL(.L_80023ADC, 0x80023ADC) //this is a jump label
/*80023ADC 000208DC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r25));
/*80023AE0 000208E0*/ PPC::Runtime::ASM::bl(fn_?loadData2);
/*80023AE4 000208E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d, context->r25));
/*80023AE8 000208E8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80023AEC 000208EC*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023AF0 000208F0*/ PPC::Runtime::ASM::extsb(context->r4, context->r0);
/*80023AF4 000208F4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x66);
/*80023AF8 000208F8*/ PPC::Runtime::ASM::lbzx(context->r4, context->r26, context->r0);
/*80023AFC 000208FC*/ PPC::Runtime::ASM::bl(fn_80133FA8);
/*80023B00 00020900*/ PPC::Runtime::ASM::b(.L_80023B0C);
RUNTIME_PPC_JUMP_LABEL(.L_80023B04, 0x80023B04) //this is a jump label
/*80023B04 00020904*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023B08 00020908*/ PPC::Runtime::ASM::bl(fn_80133FE8);
RUNTIME_PPC_JUMP_LABEL(.L_80023B0C, 0x80023B0C) //this is a jump label
/*80023B0C 0002090C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80023B10 00020910*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80023B14 00020914*/ PPC::Runtime::ASM::slw(context->r0, context->r0, context->r29);
/*80023B18 00020918*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r0);
/*80023B1C 0002091C*/ PPC::Runtime::ASM::beq(.L_80023B2C);
/*80023B20 00020920*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r30));
/*80023B24 00020924*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023B28 00020928*/ PPC::Runtime::ASM::bl(fn_801345C0);
RUNTIME_PPC_JUMP_LABEL(.L_80023B2C, 0x80023B2C) //this is a jump label
/*80023B2C 0002092C*/ PPC::Runtime::ASM::extsb(context->r3, context->r29);
/*80023B30 00020930*/ PPC::Runtime::ASM::bl(fn_801344A0);
/*80023B34 00020934*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80023B38 00020938*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80023B3C, 0x80023B3C) //this is a jump label
/*80023B3C 0002093C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80023B40 00020940*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80023B44 00020944*/ PPC::Runtime::ASM::blt(.L_8002393C);
/*80023B48 00020948*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80023B4C 0002094C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80023B50, 0x80023B50) //this is a jump label
/*80023B50 00020950*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80023B54 00020954*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80023B58 00020958*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80023B5C 0002095C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80023B60 00020960*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80023B64 00020964*/ PPC::Runtime::ASM::blr();
}